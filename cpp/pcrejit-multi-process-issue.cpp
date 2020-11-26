#include <sys/time.h>
#include <stdio.h>
#include <string.h>
#include <pcre.h>
#include <sys/mman.h>
#include <assert.h>
#include <stdint.h>
#include <pthread.h>
#include <unistd.h>
#include <inttypes.h>

#define OVECCOUNT 30    /* should be a multiple of 3 */


unsigned char body_bin[] = {
    0x2d, 0x2d, 0x32, 0x65
};
unsigned int body_bin_len = 4;


static void * (*old_malloc)(size_t size);
static void (*old_free)(void *p);


void* g_addr = NULL;
int g_offset = 0;

static void * my_malloc(size_t size) {

    char* ptr = (char*) g_addr + g_offset;
    g_offset += 32 * 1024;
//    fprintf(stderr, "my_malloc %zu, ptr %p\n", size, ptr);
    return ptr;
}

static void my_free(void *p) {

    return;
}

int main() {
    void* addr = mmap(NULL, 256 * 1024 * 1024, PROT_READ | PROT_WRITE, MAP_ANON | MAP_SHARED, -1, 0);
    fprintf(stderr, "mmap return ptr=%p\n", addr);
    assert(addr);
    g_addr = addr;


    pid_t pid = fork();
    assert(pid >= 0);

    if (pid == 0) {
        fprintf(stderr, "in manager process\n");

        //这里是子进程，manager进程
        old_malloc = pcre_malloc;
        old_free = pcre_free;
        pcre_malloc = my_malloc;
        pcre_free = my_free;

        pcre *re;
        pcre_extra * extra = NULL;

        const char *error;
        const char *pattern;
        int erroffset;
        const char *errstr;

        pattern = "(?i)\\{\\s*\\\"[\\s\\S]+(?:rmi|ldap|jdbc:h2:tcp)://[\\s\\S]+\\}";

        re = pcre_compile(pattern, 0, &error, &erroffset, NULL);
        extra = pcre_study(re, PCRE_STUDY_JIT_COMPILE, &errstr);

        pcre_malloc = old_malloc;
        pcre_free = old_free;

        int rc, i;
        struct timeval tv1, tv2, tv_res;
        int ovector[OVECCOUNT];
        const char *subject;
        int subject_length;
        int duration;

        subject = (const char*) body_bin;
        subject_length = body_bin_len;
        gettimeofday(&tv1, NULL);

        rc = pcre_exec(
                re, /* the compiled pattern */
                extra, /* no extra data - we didn't study the pattern */
                subject, /* the subject string */
                subject_length, /* the length of the subject */
                0, /* start at offset 0 in the subject */
                0, /* default options */
                ovector, /* output vector for substring information */
                OVECCOUNT); /* number of elements in the output vector */
        gettimeofday(&tv2, NULL);
        timersub(&tv2, &tv1, &tv_res);
        duration = tv_res.tv_sec * 1000000 + tv_res.tv_usec;

        fprintf(stderr, "pid(%d) pcre_exec %d us\n", getpid(), duration);

        //这里只是为了演示，没有使用进程间通信去传递re和extra，而是简单地在一个约定的位置记录下来
        char* re_ptr = (char*) g_addr + 32 * 1024 * 100;
        uint64_t re_ptr_num = (uint64_t) ((void*) re);
        memcpy(re_ptr, &re_ptr_num, sizeof (uint64_t));
        fprintf(stderr, "manager re ptr is %p\n", re);
        fprintf(stderr, "manager re num " "%" PRIu64 "\n", re_ptr_num);


        char* extra_ptr = (char*) g_addr + 32 * 1024 * 200;
        uint64_t extra_ptr_num = (uint64_t) ((void*) extra);
        memcpy(extra_ptr, &extra_ptr_num, sizeof (uint64_t));
        fprintf(stderr, "manager extra ptr is %p\n", extra);
        fprintf(stderr, "manager extra num " "%" PRIu64 "\n", extra_ptr_num);



    } else {
        //这里是父进程
        //nginx在这里fork了多个worker进程，但我们为了演示，不需要这样做

        //确保manager进程先运行
        sleep(2);
        fprintf(stderr, "\nin worker process\n");
        
        char* re_ptr = (char*) g_addr + 32 * 1024 * 100;
        uint64_t re_num = *((uint64_t*) re_ptr);
        pcre* re_in_worker = (pcre*) re_num;
        fprintf(stderr, "re_in_worker %p\n", re_in_worker);


        char* extra_ptr = (char*) g_addr + 32 * 1024 * 200;
        uint64_t extra_num = *((uint64_t*) extra_ptr);
        pcre_extra* extra_in_worker = (pcre_extra*) extra_num;

        fprintf(stderr, "extra_in_worker %p\n", extra_in_worker);

        int rc;
        struct timeval tv1, tv2, tv_res;
        int ovector[OVECCOUNT];
        const char *subject;
        int subject_length;
        int duration;

        subject = (const char*) body_bin;
        subject_length = body_bin_len;
        gettimeofday(&tv1, NULL);

        rc = pcre_exec(
                re_in_worker, /* the compiled pattern */
                extra_in_worker, /* no extra data - we didn't study the pattern */
                subject, /* the subject string */
                subject_length, /* the length of the subject */
                0, /* start at offset 0 in the subject */
                0, /* default options */
                ovector, /* output vector for substring information */
                OVECCOUNT); /* number of elements in the output vector */
        gettimeofday(&tv2, NULL);
        timersub(&tv2, &tv1, &tv_res);
        duration = tv_res.tv_sec * 1000000 + tv_res.tv_usec;

        fprintf(stderr, "pid(%d) worker process pcre_exec %d us\n", getpid(), duration);
    }
    return 0;
}
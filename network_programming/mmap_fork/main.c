#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <poll.h>
#include <pthread.h>
#include <setjmp.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>

typedef struct {
    u_char *addr;
    size_t size;
} ngx_shm_t;

typedef unsigned long ngx_atomic_uint_t;

typedef volatile ngx_atomic_uint_t ngx_atomic_t;
typedef uintptr_t ngx_uint_t;

typedef intptr_t ngx_int_t;

typedef struct {
    ngx_atomic_t *lock;
    ngx_uint_t spin;
} ngx_shmtx_t;

typedef struct {
    ngx_atomic_t lock;
} ngx_shmtx_sh_t;

ngx_shmtx_t ngx_accept_mutex;


int ngx_shm_alloc(ngx_shm_t *shm) {
    shm->addr = (u_char *) mmap(NULL, shm->size,
            PROT_READ | PROT_WRITE,
            MAP_ANON | MAP_SHARED, -1, 0);

    if (shm->addr == MAP_FAILED) {
        return -1;
    }

    return 0;
}

ngx_int_t
ngx_shmtx_create(ngx_shmtx_t *mtx, ngx_shmtx_sh_t *addr, u_char *name) {
    //因为创建共享内存时使用了MAP_ANONYMOUS选项，The mapping is not backed by any file; its contents are initialized to zero
    //所以addr->lock的值初始为0
    //详见 ngx_shm_alloc,  man mmap
    mtx->lock = &addr->lock;

    if (mtx->spin == (ngx_uint_t) - 1) {
        return 0;
    }
    mtx->spin = 2048;
    return 0;
}


int main(int argc, char** argv) {
    //    ngx_shm_t shm;
    //    size_t size, cl;
    //    u_char *shared;
    //
    //    cl = 128;
    //    size = cl /* ngx_accept_mutex */
    //            + cl /* ngx_connection_counter */
    //            + cl; /* ngx_temp_number */
    //
    //    shm.size = size;
    //
    //
    //    if (ngx_shm_alloc(&shm) != 0) {
    //        return -1;
    //    }
    //
    //    shared = shm.addr;
    //
    //    ngx_accept_mutex.spin = (ngx_uint_t) - 1;
    //
    //    if (ngx_shmtx_create(&ngx_accept_mutex, (ngx_shmtx_sh_t *) shared, NULL) != 0) {
    //        return -1;
    //    }

    u_char* addr = (u_char *) mmap(NULL, 128,
            PROT_READ | PROT_WRITE,
            MAP_ANON | MAP_SHARED, -1, 0);

    if (addr == MAP_FAILED) {
        return -1;
    }

    memcpy(addr, "hello world", sizeof ("hello world"));

    pid_t pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(0);
    } else if (pid > 0) {
        //parent
        sleep(2);
        printf("in parent, str is %s\n", addr);

        memcpy(addr, "jilichen9876543210", sizeof ("jilichen9876543210"));
        wait(NULL);
        
    } else {
        //child

        printf("in child step 1, str is %s\n", addr);
        memcpy(addr, "chenjili1234567890", sizeof ("chenjili1234567890"));
        printf("in child step 2, str is %s\n", addr);

        sleep(5);
        printf("in child step 3, str is %s\n", addr);
        
    }
    return (EXIT_SUCCESS);
}

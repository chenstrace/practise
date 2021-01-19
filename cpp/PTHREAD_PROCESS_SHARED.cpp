#include <arpa/inet.h>
#include <assert.h>
#include <bits/stdc++.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <poll.h>
#include <pthread.h>
#include <setjmp.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#ifdef __unix__
#include <sys/epoll.h>
#endif
using namespace std;

int g_count = 0;
const int THREAD_COUNT = 1000;
const int PROCESS_COUNT = 1000;
const int ADD_TIMES = 5000;
pthread_t tids[THREAD_COUNT];

void* start_routine(void* arg) {
    pthread_mutex_t* mutex = (pthread_mutex_t*)arg;
    for (int i = 0; i < ADD_TIMES; i++) {
        pthread_mutex_lock(mutex);
        g_count++;
        pthread_mutex_unlock(mutex);
    }
    return NULL;
}

void test_by_thread() {
    pthread_mutex_t mutex;

    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < THREAD_COUNT; i++) {
        pthread_create(&tids[i], NULL, start_routine, &mutex);
    }

    for (int i = 0; i < THREAD_COUNT; i++) {
        pthread_join(tids[i], NULL);
    }
    fprintf(stderr, "test by thread, count %d\n", g_count);
}

typedef struct {
    pthread_mutex_t mutex;
    int count;
} info_t;

void test_by_process() {
    void* addr = mmap(NULL, sizeof(info_t), PROT_READ | PROT_WRITE, MAP_ANON | MAP_SHARED, -1, 0);

    if (addr == MAP_FAILED) {
        fprintf(stderr, "mmap failed\n");
    }

    info_t* info = (info_t*)addr;

    info->count = 0;
    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    //使用PTHREAD_PROCESS_SHARED，如果注释掉，结果就不对了
    pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);
    pthread_mutex_init(&info->mutex, &attr);

    for (int i = 0; i < PROCESS_COUNT; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            // child

            for (int j = 0; j < ADD_TIMES; j++) {
                pthread_mutex_lock(&info->mutex);
                info->count++;
                pthread_mutex_unlock(&info->mutex);
            }
            exit(0);
        } else if (pid > 0) {
            // parent
        } else {
            assert(0);
        }
    }

    sleep(1);

    fprintf(stderr, "test by process, count %d\n", info->count);
}
int main(int argc, char** argv) {
    test_by_thread();
    test_by_process();

    return 0;
}

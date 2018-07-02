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

int main(int argc, char** argv) {
    size_t s = 128;
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
        printf("in parent,str is %s\n", addr);
        munmap(addr, s);

        printf("in parent, after munmap\n");

        wait(NULL);
        printf("parent exit\n");

    } else {
        //child
        sleep(5);
        printf("in child step 1, str is %s\n", addr);
        memcpy(addr, "chenjili1234567890", sizeof ("chenjili1234567890"));

        printf("in child step 2, str is %s\n", addr);

        munmap(addr, s);
        printf("child exit\n");

    }
    return (EXIT_SUCCESS);
}

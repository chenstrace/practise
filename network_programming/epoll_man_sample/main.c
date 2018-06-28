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

static char* get_epoll_events_str(uint32_t event) {
    if (event == 0) {
        return NULL;
    }

    char str[4096] = {0};
    if (event & EPOLLIN) strcat(str, "EPOLLIN,");
    if (event & EPOLLPRI) strcat(str, "EPOLLPRI,");
    if (event & EPOLLOUT) strcat(str, "EPOLLOUT,");
    if (event & EPOLLRDNORM) strcat(str, "EPOLLRDNORM,");
    if (event & EPOLLRDBAND) strcat(str, "EPOLLRDBAND,");
    if (event & EPOLLWRNORM) strcat(str, "EPOLLWRNORM,");
    if (event & EPOLLWRBAND) strcat(str, "EPOLLWRBAND,");
    if (event & EPOLLMSG) strcat(str, "EPOLLMSG,");
    if (event & EPOLLERR) strcat(str, "EPOLLERR,");
    if (event & EPOLLHUP) strcat(str, "EPOLLHUP,");
    if (event & EPOLLRDHUP) strcat(str, "EPOLLRDHUP,");
    if (event & EPOLLWAKEUP) strcat(str, "EPOLLWAKEUP,");
    if (event & EPOLLONESHOT) strcat(str, "EPOLLONESHOT,");
    if (event & EPOLLET) strcat(str, "EPOLLET,");

    if (strlen(str) == 0) {
        return NULL;
    }

    return strdup(str);
}

int main(int argc, char** argv) {
    int wfd, rfd;
    int epfd;
    struct
    struct epoll_event event;
    struct epoll_event events[512];
    int nfds;
    int pipefd[2];

    char line[512] = {0};

    pipe(pipefd);

    wfd = pipefd[1];
    rfd = pipefd[0];

    epfd = epoll_create1(0);
    event.events = EPOLLET | EPOLLIN;
    epoll_ctl(epfd, EPOLL_CTL_ADD, rfd, &event);

    write(wfd, "hello", sizeof ("hello"));

    epoll_wait(epfd, events, 512, -1);

    printf("first call epoll_wait return %d\n", nfds);

    char* str = get_epoll_events_str(events[0].events);
    printf("rfd's event is %s\n", str);
    free(str);

    read(rfd, line, 2);

    printf("read got %s\n", line);

    epoll_wait(epfd, events, 512, -1);

    printf("going to exit\n");
    return (EXIT_SUCCESS);
}


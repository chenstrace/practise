#include "headers.h"

#define MAX_EVENTS 512
static char* get_epoll_events_str(uint32_t event);

int first_epoll(int argc, char *argv[]) {
    struct epoll_event event;
    struct epoll_event events[512];

//    int fd = open(argv[1], O_RDWR | O_CREAT | O_APPEND, 0777);
//    if (fd == -1) {
//        perror("open");
//        exit(EXIT_FAILURE);
//    }
    //epoll不支持常规文件
    int fd = atoi(argv[1]);
    
    if(fd == STDIN_FILENO)
    {
        fd = STDIN_FILENO;
    }
    else if(fd == STDOUT_FILENO)
    {
        fd = STDOUT_FILENO;
    }
    else if(fd == STDERR_FILENO)
    {
        fd = STDERR_FILENO;
    }
    else
    {
        printf("wrong file xx\n");
        exit(0);
    }
    int epfd = epoll_create1(0);
    if (epfd == -1) {
        perror("epoll_create1");
        exit(EXIT_FAILURE);
    }

    event.events = EPOLLIN  | EPOLLET;
    //event.events = EPOLLIN;
    event.data.u64 = 123;
    int ret = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &event);
    if (ret == -1) {
        perror("epoll_ctl");
        exit(EXIT_FAILURE);
    }
    while (1) {
        int nfds = epoll_wait(epfd, events, MAX_EVENTS, -1);
        if (nfds == -1) {
            perror("epoll_wait");
            exit(EXIT_FAILURE);
        }
        printf("epoll_wait return %d\n", nfds);

        for (int i = 0; i < nfds; i++) {
            char* str = get_epoll_events_str(events[i].events);
            printf("%dth fd's data.u64=%lu,event is %s\n",i,events[i].data.u64,str);
            free(str);
        }
        sleep(1);
    }
    return 0;
}

static char* get_epoll_events_str(uint32_t event) {
    if(event == 0)
    {
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
    
    if(strlen(str) == 0)
    {
        return NULL;
    }
    
    return strdup(str);
}



#include "headers.h"

int epoll_et_test(int argc, char *argv[])
{
    int pipefd[2];
    pid_t cpid;
    char buf;

    int parent_do_close = -1;
    int child_do_close = -1;

    if (argc != 4) {
        fprintf(stderr, "Usage: %s <string> parent_do_close child_do_close\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if(strlen(argv[2]) > 1)
    {
        fprintf(stderr, "parent_do_close must be 0 or 1\n");
        exit(EXIT_FAILURE);
    }
    if(strlen(argv[3]) > 1)
    {
        fprintf(stderr, "child_do_close must be 0 or 1\n");
        exit(EXIT_FAILURE);
    }
    if(!isdigit(argv[2][0]))
    {
        fprintf(stderr, "parent_do_close must be 0 or 1\n");
        exit(EXIT_FAILURE);
    }
    if(!isdigit(argv[3][0]))
    {
        fprintf(stderr, "child_do_close must be 0 or 1\n");
        exit(EXIT_FAILURE);
    }
    
    parent_do_close = atoi(argv[2]);
    child_do_close = atoi(argv[3]);
        
    if(parent_do_close  == 0 || parent_do_close == 1)
    {
    }
    else
    {
        fprintf(stderr, "parent_do_close must be 0 or 1\n");
        exit(EXIT_FAILURE);
    }
    
    if(child_do_close  == 0 || child_do_close == 1)
    {
    }
    else
    {
        fprintf(stderr, "child_do_close must be 0 or 1\n");
        exit(EXIT_FAILURE);
    }

    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    cpid = fork();
    if (cpid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (cpid == 0) { /* Child reads from pipe */
        
        if(child_do_close)
        {
            close(pipefd[1]);
        }
        
        int epfd = epoll_create1(0);
        if(epfd == -1)
        {
                                perror("epoll_create1");
        exit(EXIT_FAILURE);
        }
        struct epoll_event event;
        event.events = EPOLLIN|EPOLLET;
        event.data.u64 = 123;
        int ret = epoll_ctl(epfd, EPOLL_CTL_ADD, pipefd[0], &event);
        if(ret == -1)
        {
            perror("epoll_ctl");
            exit(EXIT_FAILURE);
        }
        
        ret = epoll_wait (epfd, &event,1, -1);
        
       

        while (read(pipefd[0], &buf, 1) > 0)
            write(STDOUT_FILENO, &buf, 1);

        write(STDOUT_FILENO, "\n", 1);
        close(pipefd[0]);
        _exit(EXIT_SUCCESS);

    } else { /* Parent writes argv[1] to pipe */     
        if(parent_do_close)
        {
           close(pipefd[0]);
        }
        
        write(pipefd[1], argv[1], strlen(argv[1]));
        close(pipefd[1]); /* Reader will see EOF */
        wait(NULL); /* Wait for child */
        exit(EXIT_SUCCESS);
    }
}
#include "headers.h"



int socketpair_test(int argc, char *argv[])
{
    int fds[2];
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
    
    if (socketpair (AF_UNIX, SOCK_STREAM, 0,fds) == -1) {
        perror("socketpair");
        exit(EXIT_FAILURE);
    }

    cpid = fork();
    if (cpid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (cpid == 0) {
        /* Child process */
        if(child_do_close)
        {
            close(fds[1]);
        }
       
        while (read(fds[0], &buf, 1) > 0)
            write(STDOUT_FILENO, &buf, 1);

        write(STDOUT_FILENO, "\n", 1);
        close(fds[0]);
        _exit(EXIT_SUCCESS);

    } else {
        /* Parent process */
        if(parent_do_close)
        {
           close(fds[0]);
        }
        write(fds[1], argv[1], strlen(argv[1]));
        close(fds[1]);
        wait(NULL);
        exit(EXIT_SUCCESS);
    }
}

//1. 父进程write前 NOT 执行close(fds[0])，子进程read之前 NOT 执行close(fds[1])， NOT OK
//2. 父进程write前 NOT 执行close(fds[0])，子进程read之前 DO 执行close(fds[1])， OK
//3. 父进程write前 DO 执行close(fds[0])，子进程read之前 NOT 执行close(fds[1])， NOT OK
//4. 父进程write前 DO 执行close(fds[0])，子进程read之前 DO 执行close(fds[1])， OK



//终上， 只要子进程执行了close(fds[1])，程序就不会阻塞


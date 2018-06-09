#include "headers.h"

//我们假设父进程A中,它与子进程B之间的匿名套接字对为AB[2],它与子进程C之间的匿名套接字对为AC[2]。且进程B在进程C之前被fork出来。

#define MAX_PROCESSES 2

typedef struct {
    int channel[2];
} ngx_process_t;

ngx_process_t ngx_processes[MAX_PROCESSES];

void print_child()
{
    printf("child pid = %d, "
    "process[0].channel[0]=%d, "
    "process[0].channel[1]=%d, "
    "process[1].channel[0]=%d, "
    "process[1].channel[1]=%d\n",
            getpid(),
            ngx_processes[0].channel[0],
            ngx_processes[0].channel[1],
            ngx_processes[1].channel[0],
            ngx_processes[1].channel[1]
            );
}

void print_parent()
{
    printf("parent pid = %d, "
    "process[0].channel[0]=%d, "
    "process[0].channel[1]=%d, "
    "process[1].channel[0]=%d, "
    "process[1].channel[1]=%d\n",
            getpid(),
            ngx_processes[0].channel[0],
            ngx_processes[0].channel[1],
            ngx_processes[1].channel[0],
            ngx_processes[1].channel[1]
            );
}

int ABC(int argc, char *argv[]) {
    pid_t cpid;
    int s;
    int max = atoi(argv[1]);
    for (s = 0; s < max; s++) {
//        if (socketpair(AF_UNIX, SOCK_STREAM, 0, ngx_processes[s].channel) == -1) {
//            perror("socketpair");
//            exit(EXIT_FAILURE);
//        }
        cpid = fork();
        if (cpid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (cpid == 0) {
            //child
            printf("child pid = %d, ppid=%d s=%d\n",getpid(),getppid(),s);
            
        } else {
            //parent
            //printf("parent pid = %d,s=%d\n",getpid(),s);
            wait(NULL);

        }

    }

}



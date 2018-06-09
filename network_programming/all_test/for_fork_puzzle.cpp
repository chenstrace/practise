#include "headers.h"

//问: 循环fork, 问总共printf了多少行,
//答: 2^n-1 

int fork_puzzle(int argc, char *argv[]) {
    pid_t cpid;
    int n;
    int max = atoi(argv[1]);
    for (n = 0; n < max; n++) {
        cpid = fork();
        if (cpid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (cpid == 0) {
            //child
            printf("child pid = %d, ppid=%d n=%d\n", getpid(), getppid(), n);
        } else {
            //parent
            wait(NULL);
        }
    }
}



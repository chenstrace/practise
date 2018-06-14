#include "headers.h"

extern int pipe_test(int argc, char *argv[]);
extern int socketpair_test(int argc, char *argv[]);
extern int socketpair_nonblock_in_one_process(int argc, char *argv[]);
extern int fork_puzzle(int argc, char *argv[]);

extern int ABC(int argc, char *argv[]);

extern void sizeof_test();
extern int first_epoll(int argc, char *argv[]);

int main(int argc, char** argv) {
    //pipe_test(argc,argv);


    //socketpair_test(argc,argv);
    //socketpair_nonblock_in_one_process(argc,argv);
    //fork_puzzle( argc, argv);
    //ABC( argc, argv);


    //sizeof_test();
    first_epoll(argc, argv);

    return 0;
}


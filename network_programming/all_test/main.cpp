#include "headers.h"

extern int pipe_test(int argc, char *argv[]);
extern int socketpair_test(int argc, char *argv[]);
extern int socketpair_nonblock_in_one_process(int argc, char *argv[]);


int main(int argc, char** argv) {
    //pipe_test(argc,argv);
    
    
    //socketpair_test(argc,argv);
    socketpair_nonblock_in_one_process(argc,argv);
    return 0;
}


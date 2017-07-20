#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <unistd.h>
#include <pthread.h>

#define MAX_THREADS 10 

typedef struct t_thread_arg {
    int sockfd;
    int num;
    int index;
    struct sockaddr_in serv_addr;
    char send_buffer[256];
    char recv_buffer[256];

} thread_arg;


void* start_routine(void *argument) {
    thread_arg* arg = (thread_arg*) argument;
    float total = 0;
    float res;
    struct timeval tv1, tv2, tv_res;
    int n;
    if (arg == NULL) {
        return NULL;
    }

    gettimeofday(&tv1, NULL);
    if (connect(arg->sockfd, (struct sockaddr*) &arg->serv_addr, sizeof (arg->serv_addr)) < 0) {
        perror("ERROR connecting");
        exit(1);
    }
    gettimeofday(&tv2, NULL);

    timersub(&tv2, &tv1, &tv_res);
    res = tv_res.tv_sec * 1000000 + tv_res.tv_usec;
    printf("thread %d connect spends %fms\n", arg->index, res / 1000);
    total += res;

    n = write(arg->sockfd, arg->send_buffer, strlen(arg->send_buffer));

    if (n < 0) {
        perror("ERROR writing to socket");
        exit(1);
    }

    gettimeofday(&tv1, NULL);
    n = read(arg->sockfd, arg->recv_buffer, 255);
    gettimeofday(&tv2, NULL);
    timersub(&tv2, &tv1, &tv_res);
    res = tv_res.tv_sec * 1000000 + tv_res.tv_usec;
//    printf("thread %d recv spends %fms\n", arg->index, res / 1000);
    total += res;

    if (n < 0) {
        perror("ERROR reading from socket");
        exit(1);
    }

    printf("thread %d connect + send + recv spends %fms\n", arg->index, total / 1000);
    //printf("thread %d recv content is %s\n", arg->index, arg->recv_buffer);
    return NULL;
}

int main(int argc, char** argv) {
    int i = 0;
    int portno;
    pthread_t t[MAX_THREADS];

    thread_arg args[MAX_THREADS];

    struct hostent *server;
    struct timeval tv1, tv2, tv_res;
    float res;


    if (argc < 3) {
        fprintf(stderr, "usage %s hostname port\n", argv[0]);
        exit(0);
    }
    portno = atoi(argv[2]);
    server = gethostbyname(argv[1]);

    if (server == NULL) {
        fprintf(stderr, "ERROR, no such host\n");
        exit(0);
    }

    for (i = 0; i < MAX_THREADS; i++) {
        args[i].num = i + 1000;
        args[i].index = i;
        bzero(args[i].recv_buffer, 256);
        bzero(args[i].send_buffer, 256);
        sprintf(args[i].send_buffer,"hello %d",i);
        
        
        args[i].sockfd = socket(AF_INET, SOCK_STREAM, 0);
        if (args[i].sockfd == -1) {
            perror("ERROR opening socket");
            exit(1);
        }

        bzero(&(args[i].serv_addr), sizeof (args[i].serv_addr));
        args[i].serv_addr.sin_family = AF_INET;
        bcopy((char *) server->h_addr, (char *) &args[i].serv_addr.sin_addr.s_addr, server->h_length);
        args[i].serv_addr.sin_port = htons(portno);
    }
    gettimeofday(&tv1, NULL);

    for (i = 0; i < MAX_THREADS; i++) {
        int r = pthread_create(&t[i], NULL, start_routine, &args[i]);
        if (r != 0) {
            //pthread_create failed
            printf("pthread_create failed\n");
            exit(0);
        }
    }



    for (i = 0; i < MAX_THREADS; i++) {
        int r = pthread_join(t[i], NULL);
        if (r != 0) {
            //pthread_join failed
            printf("pthread_join failed\n");
            exit(0);
        }
    }
    gettimeofday(&tv2, NULL);
    timersub(&tv2, &tv1, &tv_res);
    res = tv_res.tv_sec * 1000000 + tv_res.tv_usec;
    
   
    printf("the program total spend %fms\n", res/1000);

    return 0;
}


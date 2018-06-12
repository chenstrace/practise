#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>


#define MAXLINE 4096

int recvmsg_test(int argc, char **argv) {
    int listenfd, connfd;
    struct sockaddr_in servaddr;
    char buff[4096];
    int n;


    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        printf("create socket error:%s(errno:%d)\n", strerror(errno), errno);
        exit(0);
    }


    memset(&servaddr, 0, sizeof (servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(6666);


    if (bind(listenfd, (struct sockaddr *) &servaddr, sizeof (servaddr)) == -1) {
        printf("baind socket error:%s(errno:%d)\n", strerror(errno), errno);
        exit(0);
    }


    if (listen(listenfd, 10) == -1) {
        printf("listen socket error:%s(errno:%d)\n", strerror(errno), errno);
        exit(0);
    }


    printf("=====wait for client's reqest===\n");

    struct msghdr msg;
    msg.msg_name = NULL;
    struct iovec io;
    io.iov_base = buff;
    io.iov_len = MAXLINE;
    msg.msg_iov = &io;
    msg.msg_iovlen = 1;
    while (1) {
        if ((connfd = accept(listenfd, (struct sockaddr *) NULL, NULL)) == -1) {
            printf("accept socket error:%s(errno:%d)", strerror(errno), errno);
            continue;
        }
        ssize_t size = recvmsg(connfd, &msg, 0);
        char *tmp = (char*)msg.msg_iov[0].iov_base;
        tmp[size] = '\0';
        printf("recv msg from client:%s\n", tmp);
        close(connfd);
    }
    close(listenfd);
    return 0;
}
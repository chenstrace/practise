#include <stdio.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include<errno.h>
#include <stdlib.h>
#include <unistd.h>


#define MAXLEN 4096 

int sendmsg_test(int argc, char ** argv) {
    int sockfd, n;
    char sendline[MAXLEN];
    struct sockaddr_in servaddr;
    
    if (argc != 2) {
        printf("usage: %s <ipaddress>\n",argv[0]);
        exit(0);
    }

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        exit(0);
    }

    memset(&servaddr, 0, sizeof (servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(6666);
    if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0) {
        exit(0);
    }

    if (connect(sockfd, (struct sockaddr*) &servaddr, sizeof (servaddr)) < 0) {
        exit(0);
    }

    fgets(sendline, MAXLEN, stdin);

    struct msghdr msg;
    msg.msg_name = NULL; /*TCP,set NULL*/
    msg.msg_namelen = 0;


    struct iovec io; /*return data*/
    io.iov_base = sendline;
    io.iov_len = sizeof (sendline);


    msg.msg_iov = &io;
    msg.msg_iovlen = 1; /*one buffer*/


    ssize_t size = sendmsg(sockfd, &msg, 0);
    close(sockfd);
    return 0;
}
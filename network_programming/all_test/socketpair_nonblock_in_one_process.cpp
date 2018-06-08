#include "headers.h"

#define ngx_nonblocking(s)  fcntl(s, F_SETFL, fcntl(s, F_GETFL) | O_NONBLOCK)
#define STR "hello"

unsigned char send_buf[65535] = STR;
unsigned int total_len = sizeof(STR) - 1;
char recv_buf[65535] = {0};

int socketpair_nonblock_in_one_process(int argc, char *argv[]) {
    int fds[2];

    if (socketpair(AF_UNIX, SOCK_STREAM, 0, fds) == -1) {
        perror("socketpair");
        exit(EXIT_FAILURE);
    }

    if (ngx_nonblocking(fds[0]) == -1) {
        perror("fcntl");
        exit(EXIT_FAILURE);
    }

    if (ngx_nonblocking(fds[1]) == -1) {
        perror("fcntl");
        exit(EXIT_FAILURE);
    }

    size_t sent_len = 0;
    while (sent_len < total_len) {
        ssize_t ret = send(fds[1], send_buf + sent_len, total_len - sent_len, 0);
        if (ret == -1) {
            perror("send");
        } else {
            printf("send %d bytes\n", ret);
            sent_len += ret;
        }
    }
    printf("total sent len %d\n", sent_len);

    size_t recv_len = 0;
    while (recv_len < total_len) {
        ssize_t ret = recv(fds[0], recv_buf + recv_len, total_len - recv_len, 0);
        if (ret == -1) {
            perror("recv");
        } else {
            printf("recv %d bytes\n", ret);
            recv_len += ret;
        }
    }
    printf("total recv len %d\n", recv_len);

    printf("recv str %s\n", recv_buf);
}




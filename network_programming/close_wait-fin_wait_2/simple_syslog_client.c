#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <signal.h>
#include <netinet/tcp.h>

#define SYSLOG_SERVER_ADDRESS "127.0.0.1"
#define SYSLOG_SERVER_PORT 514
#define SYSLOG_SEVERITY 6
#define SYSLOG_FACILITY 16
const char *tcp_state_to_string(unsigned char state)
{
    switch (state)
    {
    case TCP_ESTABLISHED:
        return "ESTABLISHED";
    case TCP_SYN_SENT:
        return "SYN_SENT";
    case TCP_SYN_RECV:
        return "SYN_RECV";
    case TCP_FIN_WAIT1:
        return "FIN_WAIT1";
    case TCP_FIN_WAIT2:
        return "FIN_WAIT2";
    case TCP_TIME_WAIT:
        return "TIME_WAIT";
    case TCP_CLOSE:
        return "CLOSE";
    case TCP_CLOSE_WAIT:
        return "CLOSE_WAIT";
    case TCP_LAST_ACK:
        return "LAST_ACK";
    case TCP_LISTEN:
        return "LISTEN";
    case TCP_CLOSING:
        return "CLOSING";
    default:
        return "UNKNOWN";
    }
}
int main()
{
    struct sockaddr_in servaddr;
    char buffer[256];
    time_t now;
    struct tm *tm_info;
    char timestamp[64];

    struct sigaction sa;
    sa.sa_handler = SIG_IGN;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

    sigaction(SIGPIPE, &sa, NULL);

    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
    {
        perror("创建 socket 失败");
        return 1;
    }

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SYSLOG_SERVER_PORT);
    if (inet_pton(AF_INET, SYSLOG_SERVER_ADDRESS, &servaddr.sin_addr) <= 0)
    {
        perror("无效的地址");
        close(sockfd);
        return 1;
    }

    if (connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0)
    {
        perror("连接到 Syslog 服务器失败");
        close(sockfd);
        return 1;
    }

    while (1)
    {
        char buffer[6] = "hello\n";
        time(&now);
        tm_info = localtime(&now);
        strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%S%z", tm_info);

        char syslog_message[512];
        snprintf(syslog_message, sizeof(syslog_message), "<%d> %s  Syslog Client: %s",
                 SYSLOG_FACILITY * 8 + SYSLOG_SEVERITY, timestamp, buffer);
        struct tcp_info info;

        int len;
        if (getsockopt(sockfd, IPPROTO_TCP, TCP_INFO, &info, (socklen_t *)&len) < 0)
        {
            perror("getsockopt TCP_INFO");
            close(sockfd);
            exit(EXIT_FAILURE);
        }
        printf("state=%d,%s\n", info.tcpi_state, tcp_state_to_string(info.tcpi_state));

        int c = send(sockfd, syslog_message, strlen(syslog_message), 0);
        if (c < 0)
        {
            perror("发送消息失败\n");
        }
        else
        {
            printf("发送消息成功\n");
        }
        sleep(5);
    }

    close(sockfd);
    printf("程序退出。\n");
    return 0;
}

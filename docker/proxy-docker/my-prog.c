#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
//tnet proxy --listen=0.0.0.0:56088 --connect=127.0.0.1:3128 --tunnel-connect=ws://1.1.1.1:80/test --crypt-key=988123
int main(int argc, char *argv[]) {
    char* listen_arg = NULL;
    char* connect_arg = NULL;
    char* tunnel_connect_arg = NULL;
    char* crypt_key_arg  =NULL;

    const struct option long_options[] = {
        {"listen", required_argument, NULL, 1000},
        {"connect", required_argument, NULL, 2000},
        {"tunnel-connect", required_argument, NULL, 3000},
        {"crypt-key", required_argument, NULL, 4000},
        {NULL, 0, NULL, 0}
    };

    int opt;
    int option_index;

    while ((opt = getopt_long(argc, argv, "", long_options, &option_index)) != -1) {
        switch (opt) {
            case 1000:
                listen_arg = optarg;
                printf("listen_arg is %s\n",listen_arg);
                break;
            case 2000:
                connect_arg = optarg;
                printf("connect_arg is %s\n",connect_arg);
                break;
            case 3000:
                tunnel_connect_arg = optarg;
                printf("tunnel_connect_arg is %s\n",tunnel_connect_arg);
                break;
            case 4000:
                crypt_key_arg = optarg;
                printf("crypt_key arg is %s\n",crypt_key_arg);
                break;
 
            case '?':
                fprintf(stderr, "Unknown option: %s\n", argv[optind - 1]);
                exit(EXIT_FAILURE);
        }
    }

    return 0;
}

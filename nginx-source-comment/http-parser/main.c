#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


#include "a.req.c"
#include "didihttpparser.h"

int main()
{
    int i = 0;
    const char* buf = a_req;
    int len = a_req_len;

    const char* method = NULL;
    int method_len = 0;
    const char* unparsed_uri = NULL;
    int unparsed_uri_len = 0;
    const char* uri = NULL;
    int uri_len = NULL;
    const char* args = NULL;
    int args_len = 0;
    int major_version = 0;
    int minor_version = 0;

    const int MAX_HEADERS_COUNT = 100;
    struct didi_http_header headers[MAX_HEADERS_COUNT];
    int num_headers = MAX_HEADERS_COUNT;

    int ret = didi_parse_http_request(
        buf,
        len,
        &method,
        &method_len,
        &unparsed_uri, //with args
        &unparsed_uri_len,
        &uri, //without args
        &uri_len,
        &args,
        &args_len,
        &major_version,
        &minor_version,
        headers,
        &num_headers);

    assert(ret > 0);
    printf("method: %.*s\n", (int)method_len, method);
    printf("method_len=%d\n", (int)method_len);

    printf("unparsed_uri: %.*s\n", (int)unparsed_uri_len, unparsed_uri);
    printf("unparsed_uri_len=%d\n", (int)unparsed_uri_len);

    printf("uri: %.*s\n", (int)uri_len, uri);
    printf("uri_len=%d\n", (int)uri_len);

    printf("args: %.*s\n", (int)args_len, args);
    printf("args_len=%d\n", (int)args_len);

    printf("major_version=%d, minor_version=%d\n", major_version, minor_version);
    printf("header count=%d\n", (int)num_headers);

    for (i = 0; i < num_headers; i++) {
        printf("headers[%d]: key=%.*s,value=%.*s\n",
            i,
            (int)headers[i].key_len, headers[i].key,
            (int)headers[i].value_len, headers[i].value);
    }

    return 0;
}
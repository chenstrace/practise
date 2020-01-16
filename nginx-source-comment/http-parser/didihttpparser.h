#ifndef didihttpparser_h
#define didihttpparser_h

#include <sys/types.h>
#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif

struct didi_http_header {
    const char* key;
    int key_len;
    const char* value;
    int value_len;
};

int didi_parse_http_request(
    const char* buf,
    int len,
    const char** method,
    int* method_len,
    const char** unparsed_uri, //with args
    int* unparsed_uri_len,
    const char** uri, //without args
    int* uri_len,
    const char** args,
    int* args_len,
    int* major_version,
    int* minor_version,
    struct didi_http_header* headers,
    int* num_headers);



#ifdef __cplusplus
}
#endif

#endif
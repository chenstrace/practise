#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* some_strs[] = {"last", "middle", "first"};

int compare(const void* op1, const void* op2) {
    const char** p1 = (const char**)op1;
    const char** p2 = (const char**)op2;

    int r = (strcmp(*p1, *p2));
    // printf("ret=%d\n", r);
    return r;
}

typedef struct {
    size_t len;
    char* data;
} ngx_str_t;

typedef struct {
    ngx_str_t first;
    ngx_str_t second;
} str_pair_t;

int str_pair_compare(const void* op1, const void* op2) {
    const str_pair_t* p1 = (const str_pair_t*)op1;
    const str_pair_t* p2 = (const str_pair_t*)op2;

    int len;
    int len1 = p1->first.len;
    int len2 = p2->first.len;
    if (len1 <= len2) {
        len = len1;
    } else {
        len = len2;
    }

    int r = strncmp(p1->first.data, p2->first.data, len);
    // printf("ret=%d\n", r);
    return r;
}

int main(void) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("%s ", some_strs[i]); } puts("");

    qsort(some_strs, 3, sizeof(char*), compare);
    for (i = 0; i < 3; i++) {
        printf("%s ", some_strs[i]);
    }
    puts("");

    const int N = 3;
    str_pair_t* sp = (str_pair_t*)malloc(sizeof(str_pair_t) * N);

    sp[2].first.data = strdup("12345");
    sp[2].first.len = 5;
    sp[2].second.data = strdup("54321");
    sp[2].second.len = 5;

    sp[1].first.data = strdup("abcd");
    sp[1].first.len = 4;
    sp[1].second.data = strdup("dcba");
    sp[1].second.len = 4;

    sp[0].first.data = strdup("abc");
    sp[0].first.len = 3;
    sp[0].second.data = strdup("cba");
    sp[0].second.len = 3;

    printf("%.*s ==> %.*s\n", (int)sp[0].first.len, sp[0].first.data, (int)sp[0].second.len, sp[0].second.data);
    printf("%.*s ==> %.*s\n", (int)sp[1].first.len, sp[1].first.data, (int)sp[1].second.len, sp[1].second.data);
    printf("%.*s ==> %.*s\n", (int)sp[2].first.len, sp[2].first.data, (int)sp[2].second.len, sp[2].second.data);
    qsort(sp, N, sizeof(str_pair_t), str_pair_compare);

    printf("\nafter sort\n");
    printf("%.*s ==> %.*s\n", (int)sp[0].first.len, sp[0].first.data, (int)sp[0].second.len, sp[0].second.data);
    printf("%.*s ==> %.*s\n", (int)sp[1].first.len, sp[1].first.data, (int)sp[1].second.len, sp[1].second.data);
    printf("%.*s ==> %.*s\n", (int)sp[2].first.len, sp[2].first.data, (int)sp[2].second.len, sp[2].second.data);

    for (i = 0; i < N; i++) {
        free(sp[i].first.data);
        free(sp[i].second.data);
    }

    free(sp);

    return EXIT_SUCCESS;
}

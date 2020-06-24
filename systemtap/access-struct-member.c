#include <stdio.h>

typedef struct str {
    int len;
    char* data;
} str_t;

typedef struct policy {
    str_t name;
    int id;
} policy_t;

int main(int argc, char* argv[]) {
    policy_t policy;
    policy_t* p = &policy;

    p->id = 111;
    p->name.data = "test";
    p->name.len = sizeof("test") - 1;

    printf("p->id: %d, p->name.data: %s, p->name.len: %d\n", p->id, p->name.data, p->name.len);

    return 0;
}


#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef intptr_t ngx_int_t;

typedef struct ngx_queue_s ngx_queue_t;

struct ngx_queue_s {
    ngx_queue_t* prev;
    ngx_queue_t* next;
};

#define ngx_queue_init(q) \
    (q)->prev = q;        \
    (q)->next = q

#define ngx_queue_empty(h) (h == (h)->prev)

#define ngx_queue_insert_head(h, x) \
    (x)->next = (h)->next;          \
    (x)->next->prev = x;            \
    (x)->prev = h;                  \
    (h)->next = x

#define ngx_queue_insert_after ngx_queue_insert_head

#define ngx_queue_insert_tail(h, x) \
    (x)->prev = (h)->prev;          \
    (x)->prev->next = x;            \
    (x)->next = h;                  \
    (h)->prev = x

#define ngx_queue_head(h) (h)->next

#define ngx_queue_last(h) (h)->prev

#define ngx_queue_sentinel(h) (h)

#define ngx_queue_next(q) (q)->next

#define ngx_queue_prev(q) (q)->prev

#define ngx_queue_remove(x)      \
    (x)->next->prev = (x)->prev; \
    (x)->prev->next = (x)->next; \
    (x)->prev = NULL;            \
    (x)->next = NULL

#define ngx_queue_split(h, q, n) \
    (n)->prev = (h)->prev;       \
    (n)->prev->next = n;         \
    (n)->next = q;               \
    (h)->prev = (q)->prev;       \
    (h)->prev->next = h;         \
    (q)->prev = n;

#define ngx_queue_add(h, n)      \
    (h)->prev->next = (n)->next; \
    (n)->next->prev = (h)->prev; \
    (h)->prev = (n)->prev;       \
    (h)->prev->next = h;

#define ngx_queue_data(q, type, link) (type*)((u_char*)q - offsetof(type, link))

ngx_queue_t* ngx_queue_middle(ngx_queue_t* queue);
void ngx_queue_sort(ngx_queue_t* queue, ngx_int_t (*cmp)(const ngx_queue_t*, const ngx_queue_t*));

ngx_queue_t* ngx_queue_middle(ngx_queue_t* queue) {
    ngx_queue_t *middle, *next;

    middle = ngx_queue_head(queue);

    if (middle == ngx_queue_last(queue)) {
        return middle;
    }

    next = ngx_queue_head(queue);

    for (;;) {
        middle = ngx_queue_next(middle);

        next = ngx_queue_next(next);

        if (next == ngx_queue_last(queue)) {
            return middle;
        }

        next = ngx_queue_next(next);

        if (next == ngx_queue_last(queue)) {
            return middle;
        }
    }
}

/* the stable insertion sort */

void ngx_queue_sort(ngx_queue_t* queue, ngx_int_t (*cmp)(const ngx_queue_t*, const ngx_queue_t*)) {
    ngx_queue_t *q, *prev, *next;

    q = ngx_queue_head(queue);

    if (q == ngx_queue_last(queue)) {
        return;
    }

    for (q = ngx_queue_next(q); q != ngx_queue_sentinel(queue); q = next) {
        prev = ngx_queue_prev(q);
        next = ngx_queue_next(q);

        ngx_queue_remove(q);

        do {
            if (cmp(prev, q) <= 0) {
                break;
            }

            prev = ngx_queue_prev(prev);

        } while (prev != ngx_queue_sentinel(queue));

        ngx_queue_insert_after(prev, q);
    }
}

typedef struct {
    int key;

    //这里queue成员在结构体中的位置是任意的，不必一定是第一个，也不必是最后一个
    ngx_queue_t queue;
    int value;
} ngx_foo_t;
int main(int argc, char** argv) {
    // http://nginx.org/en/docs/dev/development_guide.html#queue

    ngx_foo_t* f;
    ngx_foo_t* g;
    ngx_queue_t values, *q;

    ngx_queue_init(&values);

    f = malloc(sizeof(ngx_foo_t));
    if (f == NULL) { /* error */
        assert(0);
    }

    g = malloc(sizeof(ngx_foo_t));
    if (g == NULL) { /* error */
        assert(0);
    }

    f->key = 1;
    f->value = 100;
    ngx_queue_insert_head(&values, &f->queue);

    g->key = 2;
    g->value = 200;
    ngx_queue_insert_tail(&values, &g->queue);

    /* insert more nodes here */

    for (q = ngx_queue_head(&values); q != ngx_queue_sentinel(&values); q = ngx_queue_next(q)) {
        ngx_foo_t* t = ngx_queue_data(q, ngx_foo_t, queue);
        printf("key=%d,value=%d\n", t->key, t->value);
    }
    return 0;
}

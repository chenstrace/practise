#include <arpa/inet.h>
#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <pcre.h>
#include <poll.h>
#include <pthread.h>
#include <setjmp.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#define OVECCOUNT 30 /* should be a multiple of 3 */

int main(int argc, char** argv) {
    int i;
    pcre* re = NULL;
    unsigned char* name_table;
    const char* pattern = "(abc)(def)";
    const char* error = NULL;
    int erroffset = -1;
    int rc;
    int name_entry_size;
    re = pcre_compile(pattern,    /* the pattern */
                      0,          /* default options */
                      &error,     /* for error message */
                      &erroffset, /* for error offset */
                      NULL);      /* use default character tables */
    assert(re);
    const char* subject = "first abcdef, second abcdef, third abcdef";
    int subject_length = strlen(subject);

    int captures = -1;

    rc = pcre_fullinfo(re, NULL, PCRE_INFO_CAPTURECOUNT, &captures);
    if (rc < 0) {
        printf("call pcre_fullinfo failed\n");
        return 1;
    }
    printf("capture fullinfo is %d\n", captures);

    int ovector[OVECCOUNT];
    for (i = 0; i < OVECCOUNT; i++) {
        ovector[i] = -1;
    }

    rc = pcre_exec(re,      /* the compiled pattern */
                   NULL,    /* no extra data - we didn't study the pattern */
                   subject, /* the subject string */
                   subject_length, /* the length of the subject */
                   0,              /* start at offset 0 in the subject */
                   0,              /* default options */
                   ovector,        /* output vector for substring information */
                   OVECCOUNT);     /* number of elements in the output vector */

    if (rc < 0) {
        switch (rc) {
            case PCRE_ERROR_NOMATCH:
                printf("No match\n");
                break;
            default:
                printf("Matching error %d\n", rc);
                break;
        }
        pcre_free(re); /* Release memory used for the compiled pattern */
        return 1;
    }

    if (rc == 0) {
        rc = OVECCOUNT / 3;
        printf("ovector only has room for %d captured substrings\n", rc - 1);
    }
    printf("pcre_exec return %d\n", rc);

    for (i = 0; i < rc; i++) {
        const char* substring_start = subject + ovector[2 * i];
        int substring_length = ovector[2 * i + 1] - ovector[2 * i];

        printf("%2d: (%d to %d), %.*s\n", i, ovector[2 * i], ovector[2 * i + 1],
               substring_length, substring_start);
    }

    for (i = 0; i < OVECCOUNT; i++) {
        printf("%d,", ovector[i]);
    }
    printf("\n");
    int namecount;

    (void)pcre_fullinfo(re,   /* the compiled pattern */
                        NULL, /* no extra data - we didn't study the pattern */
                        PCRE_INFO_NAMECOUNT, /* number of named substrings */
                        &namecount);         /* where to put the answer */
    if (namecount <= 0)
        printf("No named substrings\n");
    else {
        unsigned char* tabptr;
        printf("Named substrings\n");

        /* Before we can access the substrings, we must extract the table for
        translating names to numbers, and the size of each entry in the table.
      */

        (void)pcre_fullinfo(
            re,   /* the compiled pattern */
            NULL, /* no extra data - we didn't study the pattern */
            PCRE_INFO_NAMETABLE, /* address of the table */
            &name_table);        /* where to put the answer */

        (void)pcre_fullinfo(
            re,   /* the compiled pattern */
            NULL, /* no extra data - we didn't study the pattern */
            PCRE_INFO_NAMEENTRYSIZE, /* size of each entry in the table */
            &name_entry_size);       /* where to put the answer */

        /* Now we can scan the table and, for each entry, print the number, the
        name, and the substring itself. */

        tabptr = name_table;
        for (i = 0; i < namecount; i++) {
            int n = (tabptr[0] << 8) | tabptr[1];
            printf("(%d) %*s: %.*s\n", n, name_entry_size - 3, tabptr + 2,
                   ovector[2 * n + 1] - ovector[2 * n],
                   subject + ovector[2 * n]);
            tabptr += name_entry_size;
        }
    }
    return 0;
}

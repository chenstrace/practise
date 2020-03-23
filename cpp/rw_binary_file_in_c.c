#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

static off_t filesize(const char* filename) {
    struct stat buf;

    if (!filename) {
        return 0;
    }

    return stat(filename, &buf) == 0 ? buf.st_size : 0;
}

static char* readfile(const char* filename, off_t* size) {
    char* buf = NULL;
    FILE* fp = NULL;

    if (!filename) {
        return NULL;
    }

    if (!size) {
        return NULL;
    }
    fp = fopen(filename, "rb");
    if (!fp) {
        goto failed;
    }
    *size = filesize(filename);
    if (*size == 0) {
        goto failed;
    }

    buf = (char*)malloc(*size);
    if (!buf) {
        goto failed;
    }

    if (fread(buf, *size, 1, fp) != 1) {
        goto failed;
    }
    fclose(fp);
    return buf;

failed:
    if (fp) {
        fclose(fp);
    }
    if (buf) {
        free(buf);
    }
    return NULL;
}

static bool writefile(const char* filename, const char* buf, off_t size) {
    FILE* fp = NULL;
    bool res = false;

    if (!filename || !buf || size <= 0) {
        return false;
    }

    fp = fopen(filename, "wb");
    if (!fp) {
        return false;
    }
    if (fwrite(buf, size, 1, fp) == 1) {
        res = true;
    }
    fclose(fp);
    return res;
}

int main(int argc, char** argv) {
    off_t size;
    char* buf = readfile("a.out", &size);
    bool b = writefile("a.out.bin", buf, size);
    if (buf) {
        free(buf);
    }
    printf("filesize=%ld\n", size);
    printf("write file %s\n", b == 1 ? "success" : "failed");
    return 0;
}

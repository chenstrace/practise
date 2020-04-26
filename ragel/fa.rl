#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

%%{
    machine fa;
    write data;
}%%

bool test(char *str) {
    int cs;
    char *p = str, *pe = str + strlen(str);

    %%{
        word_to = "to";
        nite = "nite";
        knight = "knight";
        night = "night";

        one_of_three = nite | knight| night;

        main := word_to one_of_three;

        write init;
        write exec;
    }%%

    if (cs < fa_first_final) {
        return false;
    }
    else {
        return true;
    }
};

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("./a.out input\n");
        return 0;
    }
    bool b = test(argv[1]);
    if (b)
        printf("match\n");
    else
        printf("not match\n");
    return 0;
}

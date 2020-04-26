#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

%%{
    machine openclose;
    write data;
}%%

bool is_fake_json(char *str)
{
    int cs;
    char *p = str, *pe = str + strlen(str);
    int open_object_count = 0;
    int open_array_count = 0;
    int close_object_count = 0;
    int close_array_count = 0;
    
    %%{
        action on_open_obj {
            printf("on_open_obj\n");
            open_object_count++;
        }   
        action on_open_array {
            printf("on_open_array\n");
            open_array_count++;
        }   

        action on_close_obj {
            printf("on_close_obj\n");
            close_object_count++;
        }   
        action on_close_array {
            printf("on_close_array\n");
            close_array_count++;
        }   
        open_object = "{";
        open_array = "[";
        close_object = "}";
        close_array = "]";

        one_or_more_open_object = open_object+;
        one_or_more_open_array = open_array+;
        open = (one_or_more_open_object@on_open_obj | one_or_more_open_array@on_open_array);
        
        one_or_more_close_object = close_object+;
        one_or_more_close_array = close_array+;
        close = (one_or_more_close_object@on_close_obj | one_or_more_close_array@on_close_array);

        main := (space*) open any* close space*;

        # Initialize and execute.
        write init;
        write exec;
    }%%

    if ( cs < openclose_first_final )
    {
        return false;
    }
    else
    {
            printf("open_object_count=%d\n",open_object_count);
            printf("close_object_count=%d\n",close_object_count);
            printf("open_array_count=%d\n",open_array_count);
            printf("close_array_count=%d\n",close_array_count);
        if(open_object_count && close_object_count && (open_object_count == close_object_count))
        {
            fprintf( stderr, "startwith open obj, endwith close obj\n" );
            return true;
        }
        else if(open_array_count && close_array_count && (open_array_count == close_array_count))
        {
            fprintf( stderr, "startwith open array, endwith close array\n" );
            return true;
        }
        else
        {
            fprintf( stderr, "wrong format\n" );
            return false;
        }
    }
};

int main(int argc, char *argv[])
{
    if(argc !=2){printf("./a.out input\n");return 0;}
    bool b  = is_fake_json(argv[1]);
    if(b) printf("fake json\n");else printf("not fake json\n");
    return 0;
}


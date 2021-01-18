%{
    /* need this for the call to atof() below */
    #include <math.h>
%}

DIGIT    [0-9]
ID       [a-z][a-z0-9]*

%%

{DIGIT}+    {
            printf( "An integer: %s (%d)\n", text(),
                    atoi( text() ) );
            }

{DIGIT}+"."{DIGIT}*        {
            printf( "A float: %s (%g)\n", text(),
                    atof( text() ) );
            }

if|then|begin|end|procedure|function        {
            printf( "A keyword: %s\n", text() );
            }

{ID}        printf( "An identifier: %s\n", text() );

"+"|"-"|"*"|"/"   printf( "An operator: %s\n", text() );

"{"[^{}\n]*"}"     /* eat up one-line comments */

[ \t\n]+          /* eat up whitespace */

.           printf( "Unrecognized character: %s\n", text() );

%%

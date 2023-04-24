%{
#include "y.tab.h"
%}

%%

[ ]         /* ignore whitespace */
[0-9]+          { yylval = atoi(yytext); return NUMBER; }
"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return TIMES; }
"/"             { return DIVIDE; }
"("             { return LPAREN; }
")"             { return RPAREN; }

.               { printf("Error: Invalid character '%s'\n", yytext); }

%%

int yywrap() {
    return 1;
}
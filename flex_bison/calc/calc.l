%{
#include "y.tab.h"
%}

%%
[ \t\r\a ]+     { /* ignore all spaces */ }
[0-9]+          { yylval = atoi(yytext); printf("lex parse num=%d\n",yylval); return T_NUM; }
[-/+*()\n]      { printf("lex parse char=%c\n",yytext[0]); return yytext[0]; }
.               { /*return 0;  end when meet everything else */ }
%%

int yywrap(void) { 
    return 1;
}

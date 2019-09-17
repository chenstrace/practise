%{
#include "y.tab.h"
%}

%%
[ \t\r\a ]+     { /* ignore all spaces */ }
[0-9]+          { yylval = atoi(yytext); return T_NUM; }
[-/+*()\n]      { return yytext[0]; }
.               { /*return 0;  end when meet everything else */ }
%%

int yywrap(void) { 
    return 1;
}

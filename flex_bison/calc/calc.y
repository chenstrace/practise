%{
#include <stdio.h>
void yyerror(const char* msg) {fprintf(stderr,"syntax error\n");}
%}

%token T_NUM

%left '+' '-'
%left '*' '/'

%%

S   :  S E '\n'        { printf("ans = %d\n", $2); }
    |  S '\n'     { /* empty */ }
    |   /* empty */     { /* empty */ }
    ;

E   :   E '+' E         { $$ = $1 + $3;printf("enter %d add %d\n",$1,$3); }
    |   E '-' E         { $$ = $1 - $3;printf("enter %d sub %d\n",$1,$3);}
    |   E '*' E         { $$ = $1 * $3;printf("enter %d mul %d\n",$1,$3);}
    |   E '/' E         { $$ = $1 / $3;printf("enter %d div %d\n",$1,$3);}
    |   T_NUM           { $$ = $1; printf("enter T_NUM\n");}
    |   '(' E ')'       { $$ = $2; printf("enter (%d)\n",$2);}
    ;

%%

int main() {
    return yyparse();
}

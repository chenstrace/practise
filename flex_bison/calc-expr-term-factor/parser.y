%{
#include <stdio.h>
int yyerror(const char* msg);
int yylex();
int yydebug=1;

%}

%token NUMBER
%token PLUS
%token MINUS
%token TIMES
%token DIVIDE
%token LPAREN
%token RPAREN

%%

program:
    expr  { printf("Result: %d\n", $1); }
    ;

expr:
    expr PLUS term { $$ = $1 + $3; printf("meet expr: expr PLUS term\n"); }
    | expr MINUS term { $$ = $1 - $3; printf("meet expr: expr MINUS term\n"); }
    | term { $$ = $1; printf("meet expr: term\n"); }
    ;

term:
    term TIMES factor { $$ = $1 * $3; printf("meet term: term TIMES factor\n"); }
    | term DIVIDE factor { $$ = $1 / $3; printf("meet term: term DIVIDE factor\n"); }
    | factor { $$ = $1; printf("meet term: factor\n"); }
    ;

factor:
    LPAREN expr RPAREN { $$ = $2; printf("meet factor: LPAREN expr RPAREN\n"); }
    | NUMBER { $$ = $1; printf("meet factor: NUMBER , $1 is %d\n",$1); }
    ;

%%

int main() {
    yyparse();
    return 0;
}

int yyerror(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    return 0;
}

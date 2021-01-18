%{ 
/* Definition section */
#include<stdio.h> 
#include<stdlib.h> 
%} 

%token NL
%token LEFT 
%token RIGHT

/* Rule Section */
%% 
G: S NL {printf("match\n"); exit(0);}
S: LEFT S RIGHT S | %empty ;
%% 

int yyerror(char *msg) 
{ 
    printf("invalid string:%s\n",msg); 
    exit(0); 
} 

//driver code 
int main() 
{ 
//extern int yydebug;
//yydebug=1;
    yyparse(); 
    return 0;
} 


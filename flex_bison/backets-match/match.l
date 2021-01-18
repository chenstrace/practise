%{ 
/* Definition section */
#include "y.tab.h" 
%} 

/* Rule Section */
%% 
"(" {return LEFT;} 
")" {return RIGHT;} 
\n {return NL;} 
. {return yytext[0];} 
%% 

int yywrap() 
{ 
    return 1; 
} 


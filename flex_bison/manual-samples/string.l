%%


'(\\.|''|[^'\n])*' {printf("hit %s, %d\n",yytext,yyleng);}

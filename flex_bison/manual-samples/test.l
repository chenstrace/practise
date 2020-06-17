%{
//'(\\.|''|[^'\n])*'
%}

%%

'(\\.)' {fprintf(stderr,"hit here, %s, length=%d\n",yytext,yyleng);}



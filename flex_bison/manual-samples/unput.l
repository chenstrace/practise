%{
    #include <math.h>
%}
%%

abc {
	printf("i am in abc\n");
	int i;
	char *yycopy = strdup( yytext );
	unput( ')' );
	for ( i = yyleng - 1; i >= 0; --i ) 
	{
		unput( yycopy[i] );
	}
	unput( '(' ); 
	free( yycopy );
} 

"(abc)" {printf("att: i am in (abc)\n");}

%%



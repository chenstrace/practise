%{
#include <stdio.h>
#include <math.h>
int hex01_count=0;
int hex02_count=0;
%}

hex01 \x01
hex02 \x02
%%
{hex01}       hex01_count++; printf("match 0x01\n");
{hex02}       hex02_count++; printf("match 0x02\n");

%%

int main( int argc, char **argv )
{
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	yylex();
printf("hex01 count = %d\n",hex01_count);
printf("hex02 count = %d\n",hex02_count);
}

%{
int word_count = 0;
%}
%%

frob        fprintf(stderr,"hit frob, reject\n"); REJECT;
[^ \t\n]+   ++word_count; fprintf(stderr,"after ++word_count, word_count=%d\n",word_count); 

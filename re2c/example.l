// re2c $INPUT -o $OUTPUT -i
#include <assert.h>                 //
                                    // C/C++ code
int lex(const char *YYCURSOR)       //
{
    /*!re2c                         // start of re2c block
    re2c:define:YYCTYPE = char;     // configuration
    re2c:yyfill:enable = 0;         // configuration
    re2c:flags:case-ranges = 1;     // configuration
                                    //
    ident = [a-zA-Z_]*; // named definition
    na = 'aa1'; // named definition
    nb = 'bb2'; // named definition
                                    //
    ident { return 0; }             // normal rule
    na { return 2; }             // normal rule
    nb { return 3; }             // normal rule
    *     { return 1; }             // default rule
    */
}                                   //
                                    //
int main()                          //
{                                   // C/C++ code
    assert(lex("_Zer0") == 0);      //
    assert(lex("aa1") == 2);      //
    assert(lex("bb2") == 3);      //
    return 0;                       //
}                    

#include <bits/stdc++.h>
#include "MySqlLexer.h"
#include "MySqlParser.h"
#include "MySqlParserBaseListener.h"
#include "antlr4-runtime.h"
using namespace antlr4;
using namespace std;
using namespace tree;

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s /path/to/sql/file\n", argv[0]);
        return 0;
    }

    std::istreambuf_iterator<char> end;

    std::ifstream ifs(argv[1]);
    std::string content(std::istreambuf_iterator<char>(ifs), end);

    ANTLRInputStream input;
    MySqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);


    input.load("SELECT * FROM T");
    lexer.reset();
    lexer.setInputStream(&input);
    tokens.setTokenSource(&lexer);
    tokens.fill();
    cout << tokens.getText() << endl;
    auto ts = tokens.getTokens();
    cout << "ts size is " << ts.size() << endl;

    for (size_t i = 0; i < ts.size(); i++) {
        printf("token[%ld]'s text is %s, start=%ld, stop=%ld,type=%ld\n", i, ts[i]->getText().c_str(),
               ts[i]->getStartIndex(), ts[i]->getStopIndex(),ts[i]->getType());
    }

    size_t token_type = tokens.get(2)->getType();
    cout << "token index 2 has type " << token_type << endl;


    tokens.seek(2);

    MySqlParser parser(&tokens);

    ParseTree* tree = parser.root();
    string s = tree->toStringTree(&parser);
    cout << s << endl;

    return 0;
}

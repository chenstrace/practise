#include <bits/stdc++.h>
#include "antlr4-runtime.h"
#include "JavaLexer.h"
#include "JavaParser.h"
#include "JavaBaseListener.h"
using namespace antlr4;
using namespace std;
using namespace tree;

class ExtractInterfaceListener : public JavaBaseListener {

    public:
    ExtractInterfaceListener(JavaParser* parser) {
        this->parser = parser;
    }

    virtual void enterClassDeclaration(JavaParser::ClassDeclarationContext* ctx) override {
        string s = "interface I" + ctx->Identifier()->getText() + " {";
        cout << s << endl;
    }
    virtual void exitClassDeclaration(JavaParser::ClassDeclarationContext* ctx) override {
        cout << "}" << endl;
    }
    virtual void enterMethodDeclaration(JavaParser::MethodDeclarationContext* ctx) override {
        // need parser to get tokens
        TokenStream* tokens = parser->getTokenStream();
        string type = "void";
        if (ctx->type() != NULL) {
            type = tokens->getText(ctx->type());
        }
        string args = tokens->getText(ctx->formalParameters());
        string s = "\t" + type + " " + ctx->Identifier()->getText() + args + ";";
        cout << s << endl;
    }
    private:
    JavaParser* parser;
};


int main(int argc, const char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s /path/to/java/file\n", argv[0]);
        return 0;
    }
    const char* filepath = argv[1];
    std::ifstream ifs;
    ifs.open(filepath);
    ANTLRInputStream input(ifs);
    JavaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    JavaParser parser(&tokens);
    ParseTree* tree = parser.compilationUnit();
    ParseTreeWalker walker;  // create standard walker
    ExtractInterfaceListener listener(&parser);
    walker.walk(&listener, tree);  // initiate walk of tree with listener

    ifs.close();
    return 0;
}

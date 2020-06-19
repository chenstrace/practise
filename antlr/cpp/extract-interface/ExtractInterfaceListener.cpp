#include <iostream>
#include "JavaBaseListener.h"
#include "antlr4-runtime.h"
using namespace std;
using namespace antlr4;

class ExtractInterfaceListener : public JavaBaseListener {
    JavaParser* parser;
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
};

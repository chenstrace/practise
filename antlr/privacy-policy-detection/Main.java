import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.ParseTree;

import java.io.FileInputStream;
import java.io.InputStream;
public class Main {
    public static void main(String[] args) throws Exception {
        String inputFile = null;
        inputFile = args[0];
        InputStream is = new FileInputStream(inputFile);
        ANTLRInputStream input = new ANTLRInputStream(is);
        MatcherLexer lexer = new MatcherLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        MatcherParser parser = new MatcherParser(tokens);
        ParseTree tree = parser.return_statement(); // parse

        EvalVisitor eval = new EvalVisitor();
        Result r = eval.visit(tree);
        System.out.println(r.Text);
        System.out.println(r.Value);

    }
}

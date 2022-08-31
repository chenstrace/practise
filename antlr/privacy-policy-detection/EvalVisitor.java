

public class EvalVisitor extends MatcherBaseVisitor<Result> {
    @Override
    public Result visitReturn(MatcherParser.ReturnContext ctx) {
        System.out.println("in visitReturn");
        return visit(ctx.equality_expression());
    }

    @Override
    public Result visitString(MatcherParser.StringContext ctx) {
        Result r = new Result();
        r.Text = ctx.getText().replace("\"", "");
        r.Value = ctx.getText().replace("\"", "");

        System.out.println("in visitString, string is " + r.Text);
        return r;
    }

    @Override
    public Result visitVariable(MatcherParser.VariableContext ctx) {
        Result r = new Result();

        String var = ctx.getText();

        r.Text = "内容";
        r.Value = "page content is : abc def xyz";
        System.out.println("in visitVariable, " + var  + " is set to " + r.Value);

        return r;
    }

    @Override
    public Result visitParen(MatcherParser.ParenContext ctx) {
        Result o = visit(ctx.expression());
        o.Text = "(" + o.Text + ")";
        return o;
    }

    @Override
    public Result visitParen2(MatcherParser.Paren2Context ctx) {
        Result o = visit(ctx.equality_expression());
        o.Text = "(" + o.Text + ")";
        return o;
    }

    @Override
    public Result visitLogicalAndOr(MatcherParser.LogicalAndOrContext ctx) {
        Result r = new Result();

        if (ctx.op.getType() == MatcherParser.LOGICAL_AND) {
            Result o1 = visit(ctx.equality_expression(0));
            System.out.println("in visitLogicalAndOr, equality_expression(0) " + o1.Value);
            Result o2 = visit(ctx.equality_expression(1));
            System.out.println("in visitLogicalAndOr, equality_expression(1) " + o2.Value);

            r.Value = (boolean) o1.Value && (boolean) o2.Value;
            String leftText =  visit(ctx.equality_expression(0)).Text;
            String midText= " 并且 ";
            String rightText = visit(ctx.equality_expression(1)).Text;
            r.Text = leftText + midText + rightText;
        }
        else if (ctx.op.getType() == MatcherParser.LOGICAL_OR) {
            Result o1 = visit(ctx.equality_expression(0));
            System.out.println("in visitLogicalAndOr, equality_expression(0) " + o1.Value);
            Result o2 = visit(ctx.equality_expression(1));
            System.out.println("in visitLogicalAndOr, equality_expression(1) " + o2.Value);

            r.Value = (boolean) o1.Value || (boolean) o2.Value;
            String leftText =  visit(ctx.equality_expression(0)).Text;
            String midText= " 或者 ";
            String rightText = visit(ctx.equality_expression(1)).Text;
            r.Text = leftText + midText + rightText;
        }
        else{
            System.out.println("in logic,error exit");
            System.exit(0);
        }

        return r;
    }

    @Override
    public Result visitStrOp(MatcherParser.StrOpContext ctx) {
        Result r = new Result();
        Result left = visit(ctx.expression(0));
        Result right = visit(ctx.expression(1));

        String leftValue = (String) left.Value;
        String rightValue = (String) right.Value;


        System.out.println("in visitStrOp, left value" + "(" + leftValue +")");

        System.out.println("in visitStrOp, right value" + "(" + rightValue +")");
        boolean contains = leftValue.contains(rightValue);

        if (contains) {
            System.out.println("in visitStrOp, contains true");
        } else {
            System.out.println("in visitStrOp, contains false");
        }
        if (ctx.op.getType() == MatcherParser.SFIND) {
            r.Text = visit(ctx.expression(0)).Text + " sfind " + visit(ctx.expression(1)).Text;
        } else {
            r.Text = visit(ctx.expression(0)).Text + " smatch " + visit(ctx.expression(1)).Text;

        }
        r.Value = contains;
        return r;
    }
}

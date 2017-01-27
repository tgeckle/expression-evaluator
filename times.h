/*
Theresa Geckle
CMSC 330 Project 2
Defines the evaluate function for the '*' operator.
*/
class Times : public SubExpression
{
public:
	Times(Expression* left, Expression* right) : SubExpression(left, right)
	{
	}

	/* Evaluates the expression. */
	int evaluate()
	{
		return left->evaluate() * right->evaluate();
	}
};

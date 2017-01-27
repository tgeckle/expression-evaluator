/*
Theresa Geckle
CMSC 330 Project 2
Defines the evaluate function for the '>' operator.
*/
class Greater : public SubExpression
{
public:
	Greater(Expression* left, Expression* right) : SubExpression(left, right)
	{
	}

	/* Evaluates the expression. */
	int evaluate()
	{
		return left->evaluate() > right->evaluate();
	}
};

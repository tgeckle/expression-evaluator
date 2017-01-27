/*
Theresa Geckle
CMSC 330 Project 2
Defines the evaluate function for the conditional operator.
*/
class Conditional : public SubExpression
{
public:
	Conditional(Expression* left, Expression* right, Expression* condition) : SubExpression(left, right)
	{
		this->condition = condition;
	}

	/* Evaluates the expression. */
	int evaluate()
	{
		if (condition->evaluate() > 0) {
			return left->evaluate();
		}
		else {
			return right->evaluate();
		}
	}
protected:
	Expression* condition;
};

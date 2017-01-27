/*
Theresa Geckle
CMSC 330 Project 2
Defines the SubExpression class as a child class of Expression.
*/
class SubExpression : public Expression
{
public:
	SubExpression(Expression* left, Expression* right); // Constructor.
	static Expression* parse(stringstream& in); // Parses the subexpression.
protected:
	Expression* left;
	Expression* right;
};
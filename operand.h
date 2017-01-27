/*
Theresa Geckle
CMSC 330 Project 2
Defines the Operand class as a child class of Expression.
*/
class Operand : public Expression
{
public:
	static Expression* parse(stringstream& in); // Parses the expression.
};
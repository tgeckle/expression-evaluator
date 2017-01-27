/*
Theresa Geckle
CMSC 330 Project 2
Defines the Variable class as a child class of Operand.
*/
class Variable : public Operand
{
public:
	Variable(string name) // Constructor.
	{
		this->name = name;
	}

	/* Evaluates the expression. */
	int evaluate();
private:
	string name;
};
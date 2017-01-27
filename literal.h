/*
Theresa Geckle
CMSC 330 Project 2
Defines a literal class as a child class of Operand.
*/
class Literal : public Operand
{
public:
	/* Constructor. */
	Literal(int value)
	{
		this->value = value;
	}

	/* Evaluates the expression. */
	int evaluate()
	{
		return value;
	}
private:
	int value;
};
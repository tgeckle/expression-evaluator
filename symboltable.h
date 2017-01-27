/*
Theresa Geckle
CMSC 330 Project 2
Defines the SymbolTable class.
*/
class SymbolTable
{
public:
	SymbolTable() {}
	void insert(string variable, int value); // Adds a variable to the table.
	int lookUp(string variable) const; // Looks up the corresponding value of a variable
	void init(); // Resets the table.
private:
	struct Symbol
	{
		Symbol(string variable, int value) // Constructor.
		{
			this->variable = variable;
			this->value = value;
		}
		string variable;
		int value;
	};
	vector<Symbol> elements;
};



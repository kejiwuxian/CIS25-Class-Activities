#include <iostream>
#include <string>

using namespace std;

double operand1, operand2;

void inputOperands()
{
	cout << "Please enther the first operand: ";
	cin >> operand1;

	cout << "Please enther the second operand: ";
	cin >> operand2;
}

int main()
{
	char operation;

	cout << "Please choose an operation (+, -, *, or /): ";
	cin >> operation;

	switch (operation)
	{
	case '+':
		inputOperands();
		cout << "Output of this operation is: " << operand1 + operand2 << endl;
		break;
	case '-':
		inputOperands();
		cout << "Output of this operation is: " << operand1 - operand2 << endl;
		break;
	case '*':
		inputOperands();
		cout << "Output of this operation is: " << operand1 * operand2 << endl;
		break;
	case '/':
		inputOperands();
		(operand2 == 0) ? cout << "Zero Division Error!" << endl : cout << "Output of this operation is: " << operand1 / operand2 << endl;
		break;
	default:
		cout << "Invalid operation!" << endl;
		return 0;
	}

	return 0;
}

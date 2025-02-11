#include <iostream>
using namespace std;

int main()
{
	int var1, var2, temp;

	cout << "Please input the first variable: ";
	cin >> var1;
	cout << "Please input the second variable: ";
	cin >> var2;

	temp = var1;
	var1 = var2;
	var2 = temp;

	cout << "The firsst variable: " << var1 << endl;
	cout << "The second variable: " << var2 << endl;

	return 0;
}

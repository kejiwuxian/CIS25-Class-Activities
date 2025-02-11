#include <iostream>

using namespace std;

int main()
{
	unsigned int age;

	cout << "Please enter your age: ";
	cin >> age;

	string category = (age >= 65) ? "Senior" : ((age >= 20) ? "Adult" : ((age >= 12) ? "Teen" : "Child"));

	cout << "Your age category is " << category << endl;

	return 0;
}

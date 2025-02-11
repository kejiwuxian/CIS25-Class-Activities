#include <iostream>

using namespace std;

int main()
{
	int grade;

	cout << "Please enter your grade: ";
	cin >> grade;

	if (grade >= 90)
	{
		cout << "Excellent" << endl;
	}
	else if (grade >= 70)
	{
		cout << "Good" << endl;
	}
	else if (grade >= 60)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}

	return 0;
}

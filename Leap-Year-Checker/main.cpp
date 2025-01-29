#include <iostream>
#include <string>

using namespace std;

int main()
{
	int year;

	cout << "Please enter a year: ";
	cin >> year;

	//bool isLeapYear = (year % 4 == 0) ? (year % 100 == 0 ? year % 400 == 0 : true) : false;
	bool isLeapYear = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);


	cout << year << (isLeapYear ? " is a leap year." : " is not a leap year.") << endl;

	return 0;
}

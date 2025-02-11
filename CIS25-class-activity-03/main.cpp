#include <iostream>
#include <cstring>

using namespace std;

// US citizen
// CA resident tuition = 0
// Non resident tuition = 1000
// Not a US citizen tuition = 3000
unsigned int tuition(bool isCitizen, bool isResident)
{
	return isCitizen ? isResident ? 0 : 1000 : 3000;
}

int main()
{
	// Naming conventions
	//int file_size; // snake case
	//int FileSize; // Pascal case
	//int fileSize; // Camel case
	//int iFileSize; // Hungarian notation Not Recommended

	// >, >=, <, <=, ==, !=
	//int x = 10;
	//int y = 5;
	//bool result = x != y;

	//cout << boolalpha << result << endl;

	//int x = 10;
	//double y = 5;
	//bool result = x != y;

	//cout << boolalpha << result << endl;

	// Logical operations
	// !, &&, ||

	// Order of operations
	// ()
	// !
	// &&
	// ||
	//bool a = true;
	//bool b = false;
	//bool c = false;
	//bool result = a || b && c;

	//cout << boolalpha << result << endl;

	// Up to 10,000 commission 10%
	// 10,000 to 15,000 commission 15%
	// Over 15,000 commission 20%

	//unsigned int sales;

	//double commission = 0.1;

	//cout << "Please enter the sales: ";
	//cin >> sales;

	//if (sales > 15000)
	//{
	//	commission = 0.2;
	//}
	//else if (sales > 10000)
	//{
	//	commission = 0.15;
	//}

	//cout << "Your commission is " << commission << endl;
	//cout << "Your Payout is " << sales * commission << endl;

	// US citizen
	// CA resident tuition = 0
	// Non resident tuition = 1000
	// Not a US citizen tuition = 3000
	bool isCitizen;
	bool isResident = true;

	cout << "Are you an US citizen? (1 for yes, 0 for no): ";
	cin >> isCitizen;
	cout << "Are you a CA resident? (1 for yes, 0 for no): ";
	cin >> isResident;

	cout << "Your tuition is " << (isCitizen ? isResident ? 0 : 1000 : 3000) << endl;

	return 0;
}

#include <iostream>
#include <string>

#include "util/customer_info.hpp"

using namespace std;

using namespace customer_info;

int main() {
	Customer customer;

	while (true)
	{
		cout << "Please enter your ID: ";
		cin >> customer.id;
		if (cin.fail() || customer.id < 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid positive number." << endl;
		}
		else break;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Please enter your name: ";
	getline(cin, customer.name);

	cout << "Please enter your email: ";
	getline(cin, customer.email);

	cout << "Please enter your street: ";
	getline(cin, customer.address.street);

	cout << "Please enter your city: ";
	getline(cin, customer.address.city);

	while (true)
	{
		cout << "Please enter your zip code: ";
		cin >> customer.address.zip_code;
		if (cin.fail() || customer.address.zip_code < 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid zip code." << endl;
		}
		else break;
	}

	cout << "Customer: " << customer << endl;
}
#pragma once
#include <iostream>

using namespace std;

namespace customer_info
{
	struct Address
	{
		string street;
		string city;
		int zip_code;
	};

	struct Customer
	{
		int id;
		string name;
		string email;
		Address address;
	};

	ostream& operator<<(ostream& stream, const Address& addr);

	ostream& operator<<(ostream& stream, const Customer& customer);
}
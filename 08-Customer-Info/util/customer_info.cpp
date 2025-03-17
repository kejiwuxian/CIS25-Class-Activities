#include <iostream>

#include "customer_info.hpp"

using namespace std;

namespace customer_info
{
	ostream& operator<<(ostream& stream, const Address& addr)
	{
		return stream << "{ street: " << addr.street << ", city: " << addr.city << ", zip_code: " << addr.zip_code << " }";
	}

	ostream& operator<<(ostream& stream, const Customer& customer)
	{
		return stream << "{ ID: " << customer.id << ", Name: " << customer.name << ", email: " << customer.email << ", address: " << customer.address << " }";
	}
}
# Customer Info

This folder contains the source code for CIS25 class activity 08.

create a structure for address:
- street
- city
- zipCode

nested the address structure within customer:
```c++
struct Customer
{
	int id;
	string name;
	string email;
	Address address;
};
```
create and initialize a customer object

Note: user validation is a must
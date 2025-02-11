#include <iostream>
#include <cstring>

using namespace std;

#include "utils/greet.hpp"

//void greet(string first_name,string last_name)
//{
//	cout << "Hi! " << first_name << " " << last_name << endl;
//}

//string full_name(string first_name, string last_name)
//{
//	return first_name + " " + last_name;
//}
//
//void greet(string name)
//{
//	cout << "Hi! " << name << endl;
//}
//
//void greet(string title, string name)
//{
//	cout << "Hello " << title << " " << name << endl;
//}

//int max(int first, int second)
//{
//	return first > second ? first : second;
//}

//double calculate_tax(double price, double tax_rate = 0.2) 
//{
//	return price * tax_rate;
//}

//double calculate_tax(double price, int salary, double tax_rate_state = 0.2, double tax_rate_city = 0.4)
//{
//	return price * (tax_rate_state + tax_rate_city);
//}


//double increase_price(double price)
//{
//	price *= 1.2;
//	return price;
//}

//double& increase_price(double& price)
//{
//	price *= 1.2;
//	return price;
//}

// function declaration (function prototype)
void greet(const string& name);

int main()
{
	//greet("Light", "Liu");

	//string name = full_name("Light", "Liu");
	//greet(name);

	//greet(full_name("Light", "Liu"));
	//greet("Lord", "Light");

	//int larger = max(2, 3);
	//cout << larger << endl;

	//double price = 100;
	//double tax_rate = 0.1;
	//int salary = 120'000;
	//cout << calculate_tax(price, tax_rate) << endl;
	//cout << calculate_tax(price) << endl;
	//cout << calculate_tax(price, salary) << endl;

	//double price = 100;
	//price = increase_price(price);
	//cout << price << endl;
	//increase_price(price);
	//cout << price << endl;

	string name = "Light";
	messaging::greet(name);
	greet(name);

	return 0;
}

// function definition
void greet(const string& name)
{
	cout << "Hi again " << name << endl;
}

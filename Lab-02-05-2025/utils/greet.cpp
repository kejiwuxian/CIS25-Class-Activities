#include <iostream>

//using std::string, std::cout, std::endl; // C++17
using std::string;
using std::cout;
using std::endl;

//#include "greet.hpp"

namespace messaging
{
	// function definition
	void greet(const string& name)
	{
		cout << "Hi " << name << endl;
	}
}

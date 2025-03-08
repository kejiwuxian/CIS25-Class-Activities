// ArrayExamples2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x[5] = { 1,2,3,4,5 };

	//For loop - print
	cout << "1->  -------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;

	//For-each loop - print
	cout << "2->  -------------------" << endl;
	for (int y :x)
	{
		cout << y << " ";
	}
	cout << endl;

	//For loop version of for-each
	cout << "3->  -------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		int y = x[i];
		cout << y << " ";
	}
	cout << endl;

	// Reset using index of element - for loop
	for (int i = 0; i < 5; i++)
	{
		x[i] = 10;
	}
	cout << endl;

	cout << "4->  -------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;

	// Reset using for-each loop -- A -- using copy
	for (int y : x)
	{
		y = 20;
	}
	cout << endl;

	//Print and check
	cout << "5->  -------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;


	// Reset using for-each loop -- B -use ref
	for (int& y : x)
	{
		y = 30;
	}
	cout << endl;

	cout << "6->  -------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;

}


/*
OUTPUT:
1->  -------------------
1 2 3 4 5
2->  -------------------
1 2 3 4 5
3->  -------------------
1 2 3 4 5

4->  -------------------
10 10 10 10 10

5->  -------------------
10 10 10 10 10

6->  -------------------
30 30 30 30 30

C:\Thana\Spring 23\CIS06\ArrayExamples2\x64\Debug\ArrayExamples2.exe (process 13880) exited with code 0.
Press any key to close this window . . .
*/

// PointerArrayExample2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
	int y;
	int x[5] = { 10, 20, 30, 40, 50 };
	double z[5] = { 1.1, 1.2, 1.3, 1.4, 1.5 };

	int xx[2][3] = { { 1, 2, 3}, {4, 5, 6 } };


	int* px;
	double* pz;

	y = 7;

	x[y] = 60;

	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << "  ";
	}
	cout << endl;

	cout << "x = " << x << endl;

	px = x;
	cout << "px = " << px << endl;

	cout << "1------>" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << px[i] << "  ";
	}
	cout << endl;

	cout << "2------>" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(x + i) << "  ";
	}
	cout << endl;

	cout << "3------>" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << (x + i) << "  ";
	}
	cout << endl;

	cout << "4------>" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(z + i) << "  ";
	}
	cout << endl;

	cout << "5------>" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << (z + i) << "  ";
	}
	cout << endl;

	px = (int*) xx;
	cout << "6------>" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << (px + i) << "  ";
	}
	cout << endl;

	cout << "7------>" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << *(px + i) << "  ";
	}
	cout << endl;


}
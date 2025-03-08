// ArrayExamples3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define 2-d arrays
    int x[5][4];

	//Arrays to keep the sum of rows and cols
	int rSum[5] = { 0 };
	int cSum[4] = { 0 };
	int cSum1[4] = { 0 };

	//Initialize the 2-d array
	int k = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//x[i][j] = i * j;
			x[i][j] = k;
			k++;
		}
	}

	//Print the contents of a 2-d array
	cout << "1--> --------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(3) << x[i][j];
		}
		cout << endl;
	}

	//Sum and print the rows
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			rSum[i] = rSum[i] + x[i][j];
		}
	}

	cout << "2--> ------Row Sum --------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << setw(5) << rSum[i];	
	}
	cout << endl;

	//Sum and print the cols - method 1
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cSum[j] = cSum[j] + x[i][j];
		}
	}

	cout << "3--> ------Col Sum A --------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << setw(5) << cSum[i];
	}
	cout << endl;

	//Sum and print the cols - method 2
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cSum1[j] = cSum1[j] + x[i][j];
		}
	}

	cout << "2--> ------Col Sum B --------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << setw(5) << cSum1[i];
	}
	cout << endl;
}

/*
OUTPUT:
1--> --------------------
  1  2  3  4
  5  6  7  8
  9 10 11 12
 13 14 15 16
 17 18 19 20
2--> ------Row Sum --------------
   10   26   42   58   74
3--> ------Col Sum A --------------
   45   50   55   60
2--> ------Col Sum B --------------
   45   50   55   60

C:\Thana\Spring 23\CIS06\ArrayExamples3\x64\Debug\ArrayExamples3.exe (process 11524) exited with code 0.
Press any key to close this window . . .
*/

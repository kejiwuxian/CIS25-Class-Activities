// FunctionExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

//Function prototype
void printLine(int = 80, char = '*');
double power(double, int);
void printRectangle(int, int, char);
double e(double);

using namespace std;

int main()
{
	double x, z;
	int y;

    cout << "1) ---> In Main Before Funtion!\n";
	cout << "2) ---> Calling funtion" << endl;
	printLine(80, '*');									//Call function
	cout << "3) ---> Back in Main" << endl;
	printLine(100, '-');								//
	cout << "4) ---> After function" << endl;
	printLine();
	cout << "5) ---> After function" << endl;
	printLine(100);
	cout << "6) ---> After function" << endl;

	x = 5.0;
	y = -2;
	cout << "5) --> Calling Power function" << endl;
	z = power(x, y);
	cout << "6) --> After Power function: z = " << z << endl;

	cout << "7) --> Calling printRectangle" << endl;
	printRectangle(10, 25, '@');
	cout << "8) --> After printRectangle funtion" << endl;

	cout << "9) --> Calling ex function" << endl;

	cout << fixed << setprecision(10);
	cout <<  " e^0 = " << setw(10) << e(0) << endl;
	cout <<  " e^0 = " << setw(10) << e(1) << endl;
	cout << " e^0 = " << setw(10) << e(2) << endl;


	//return -1234;
}

//Function definition
void printLine(int length, char ch) {

	//cout << "Beginning printLine" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << ch;
	}
	cout << endl;
	//cout << "Ending printLine" << endl;
}

void printRectangle(int rows, int cols, char ch) {

	for (int i = 0; i < rows; i++)
	{
		printLine(cols, ch);
	}
	cout << endl;
}

double power(double a, int b) {

	double result = 1;

	if (b < 0) {
		a = 1 / a;
		b = -b;
	}

	for (int i = 0; i < b; i++)
	{
		result = result * a;
	}

	return result;
}

double e(double x) {

	double result = 1;

	double ex = 1;
	for (int i = 1; i <= 20; i++)
	{
		ex = ex * x / i;
		result = result + ex;
	}
	return result;

}


/*OUTPUT:
1) ---> In Main Before Funtion!
2) ---> Calling funtion
********************************************************************************
3) ---> Back in Main
----------------------------------------------------------------------------------------------------
4) ---> After function
********************************************************************************
5) ---> After function
****************************************************************************************************
6) ---> After function
5) --> Calling Power function
6) --> After Power function: z = 0.04
7) --> Calling printRectangle
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@

8) --> After printRectangle funtion
9) --> Calling ex function
 e^0 = 1.0000000000
 e^0 = 2.7182818285
 e^0 = 7.3890560989

C:\Thana\Spring 23\CIS06\FunctionExamples\x64\Debug\FunctionExamples.exe (process 11208) exited with code 0.
Press any key to close this window . . .
*/
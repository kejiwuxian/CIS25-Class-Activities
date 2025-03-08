// PointersExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

void swap(int*, int*);

int main()
{
	int x = 10;
	int y;

	int* px = &x;
	int* py = &y;
	int* p1;
	int** p2;

	p2 = &px;

	cout << "&x = " << &x << ", px = " << px << endl;
	cout << "x = " << x << ", *px = " << *px << endl;

	cout << "&y = " << &y << ", py = " << py << endl;
	cout << "y = " << y << ", *py = " << *py << endl;


	*px = 25;
	cout << "x = " << x << ", *px = " << *px << endl;

	//y = x;
	y = *px;

	cout << "y = " << y << endl;

	x = 50;
	cout << "x = " << x << ", *px = " << *px << endl;

	p1 = px;
	cout << "p1 = " << p1 << ", *p1 = " << *p1 << endl;

	cout << "&p1 = " << &p1 << endl;

	//*p2 = 100;
	**p2 = 100;
	cout << "x = " << x << ", *px = " << *px << endl;

	cout << "First swap" << endl;
	cout << "Before swap: x = " << x << ", y = " << y << endl;
	swap(px, py);
	cout << "After swap: x = " << x << ", y = " << y << endl;

	cout << "Second swap" << endl;
	cout << "Before swap: x = " << x << ", y = " << y << endl;
	swap(&x, &y);
	cout << "After swap: x = " << x << ", y = " << y << endl;

}


void swap(int* p1, int* p2) {

	cout << "p1 = " << p1 << ", p2 = " << p2 << endl;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

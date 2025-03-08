// FunctionExamples2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int f1(int, int);
int f2();
int f3();
void swap(int, int);
void swapRef(int&, int&);

int z = 1;

int main()
{
    int x = 10;
    int y = 20;
    //int z;
    int a1;

    f1(x, y);
    cout  << "z = " << z << endl;

    cout << "Calling f2()" << endl;
    a1 = f2();
    cout << "1--> a1 = " << a1 << endl;
    a1 = f2();
    cout << "2--> a1 = " << a1 << endl;
    a1 = f2();
    cout << "3--> a1 = " << a1 << endl;

    cout << "Calling f3()" << endl;
    a1 = f3();
    cout << "1--> a1 = " << a1 << endl;
    a1 = f3();
    cout << "2--> a1 = " << a1 << endl;
    a1 = f3();
    cout << "3--> a1 = " << a1 << endl;

    cout << "--------------------------" << endl;
    cout << "Main -- Before Swap 1-> x = " << x << ", y = " << y << endl;
    cout << "Calling swap()" << endl;
    swap(x, y);
    cout << "Main -- After Swap 2-> x = " << x << ", y = " << y << endl;

    cout << "--------------------------" << endl;
    cout << "Main -- Before SwapRef 1-> x = " << x << ", y = " << y << endl;
    cout << "Calling swap()" << endl;
    swapRef(x, y);
    cout << "Main -- After SwapRef 3-> x = " << x << ", y = " << y << endl;
}


int f1(int a, int b) {
   

    cout << "1-> Inside f1 z = " << z << endl;
    
    //int z; 
    z = a + b;

    cout << "2-> Inside f1 z = " << z << endl;
    return z;
}


int f2() {

    int x = 10;
    x = 2 * x;
    return x;
}


//Using static local variable
int f3() {

    static int x = 10;
    x = 2 * x;
    return x;
}

void swap(int x, int y)
{
    cout << "Swap 1-> x = " << x << ", y = " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Swap 2-> x = " << x << ", y = " << y << endl;
}

void swapRef(int& x, int& y)
{
    cout << "Swap-Ref 1-> x = " << x << ", y = " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Swap-Ref 2-> x = " << x << ", y = " << y << endl;
}


/*
OUTPUT:
1-> Inside f1 z = 1
2-> Inside f1 z = 30
z = 30
Calling f2()
1--> a1 = 20
2--> a1 = 20
3--> a1 = 20
Calling f3()
1--> a1 = 20
2--> a1 = 40
3--> a1 = 80
--------------------------
Main -- Before Swap 1-> x = 10, y = 20
Calling swap()
Swap 1-> x = 10, y = 20
Swap 2-> x = 20, y = 10
Main -- After Swap 2-> x = 10, y = 20
--------------------------
Main -- Before SwapRef 1-> x = 10, y = 20
Calling swap()
Swap-Ref 1-> x = 10, y = 20
Swap-Ref 2-> x = 20, y = 10
Main -- After SwapRef 3-> x = 20, y = 10

C:\Thana\Spring 23\CIS06\FunctionExamples2\x64\Debug\FunctionExamples2.exe (process 11920) exited with code 0.
Press any key to close this window . . .
*/

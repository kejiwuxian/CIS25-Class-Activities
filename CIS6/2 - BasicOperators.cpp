// BasicOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14159;

    int x, y;
    int z1, z2, z3, z4, z5;
    double p, q;
    double r1, r2, r3, r4, r5;

    //PI = 4;                           Cannot change constants

    cout << "-----Integer Arithmetic-----" << endl;
    x = 35;
    y = 8;
    z1 = x + y;
    z2 = x - y;
    z3 = x * y;
    z4 = x / y;
    z5 = x % y;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "z3 = " << z3 << endl;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;
   
    cout << "--------------------------" << endl;
    x = -35;
    z4 = x / y;
    z5 = x % y;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;

    x = 35;
    y = -8;
    z4 = x / y;
    z5 = x % y;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;

    x = -35;
    y = -8;
    z4 = x / y;
    z5 = x % y;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;

    cout << "-----Double Arithmetic-----" << endl;
    p = 35;
    q = 8;
    r1 = p + q;
    r2 = p - q;
    r3 = p * q;
    r4 = p / q;
    // r5 = p % q;                      Not Allowed
    cout << "r1 = " << r1 << endl;
    cout << "r2 = " << r2 << endl;
    cout << "r3 = " << r3 << endl;
    cout << "r4 = " << r4 << endl;
    //cout << "r5 = " << r5 << endl;

    cout << "----------------------" << endl;
    cout << 5 + 2 * 8 / 3 << endl;
    cout << 5 + 2 / 3 * 8 << endl;

    cout << "-----Mixed Arithmetic and Operator Precedence-----" << endl;
    cout << "----------------------" << endl;
    cout << 5.0 + 2.0 * 8.0 / 3.0 << endl;
    cout << 5.0 + 2.0 / 3.0 * 8.0 << endl;
    cout << 5.0 + 2 * 8 / 3 << endl;
    cout << 5 + 2 / 3 * 8.0 << endl;
    cout << 5.0 + 2 / 3.0 * 8 << endl;
    cout << 5 + 2.0 / 3 * 8 << endl;

}


/*
PROGRAM OUTPUT:
-----Integer Arithmetic-----
z1 = 43
z2 = 27
z3 = 280
z4 = 4
z5 = 3
--------------------------
z4 = -4
z5 = -3
z4 = -4
z5 = 3
z4 = 4
z5 = -3
-----Double Arithmetic-----
r1 = 43
r2 = 27
r3 = 280
r4 = 4.375
----------------------
10
5
-----Mixed Arithmetic and Operator Precedence-----
----------------------
10.3333
10.3333
10
5
10.3333
10.3333

C:\Thana\Spring 23\CIS06\BasicOperators\x64\Debug\BasicOperators.exe (process 7488) exited with code 0.
Press any key to close this window . . .
*/


// RandomNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    cout << RAND_MAX << endl;

    for (int i = 0; i < 10; i++)
    {
        double y = (static_cast<double> (rand()) / RAND_MAX) * 100 - 50;
        int x = y + 0.5;
        cout << x << ", " << y << endl;
    }

    cout << endl;
    srand(1);
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
}


// PointerExamples3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x = 10;                     //int
    const int y = 25;               //constant int
    int z = 75;

    int* p1 = &x;                   //Normal pointer
    const int* p2 = &x;             //Pointer to a constant
    int* const p3 = &x;             //Constant pointer
    const int* const p4 = &x;      //Constant pointer to constant

    x = 50;
    //y = 100;              //y is a constant

    cout << " x = " << x << endl;
    *p1 = 100;
    cout << " x = " << x << endl;
    p1 = &z;

    //*p2 = 100;            //p2 is pointer to a constant
    p2 = &z;                //Okay to change p2

    *p3 = 200;
    cout << " x = " << x << endl;
    //p3 = &z;             //p3 is a constant


    int arr[5];
    p1 = new int[5];
    
    p1 = new int[10];
    //arr = new int[10]     //arr is a constant pointer
}
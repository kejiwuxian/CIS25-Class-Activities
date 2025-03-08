// FileIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    ofstream fileOut1;
    ofstream fileOut2;
    ifstream fileIn;

    fileOut1.open("Outfile1.txt");
    fileOut2.open("Outfile2.txt");
    fileIn.open("Infile.txt");

    std::cout << "Hello World! -- To Monitor\n";
    fileOut1 << "Hello World! -- To File 1\n";
    fileOut2 << "Hello World! -- To File 2\n";
   
    fileOut1.close();

    std::cout << "Hello World Again! -- To Monitor\n";
    fileOut1 << "Hello World Again! -- To File 1\n";
    fileOut2 << "Hello World Again! -- To File 2\n";

    int x;
    for (int i = 0; i < 10; i++)
    { 
        fileIn >> x;
        cout << "Reading x: " << x << endl;
    }

    cout << "Reading with while loop" << endl;
    while (fileIn >> x) {
        cout << "Reading x: " << x << endl;
    }

    fileOut2.close();
    fileIn.close();
}


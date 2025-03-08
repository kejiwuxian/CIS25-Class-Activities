// InputOutput.cpp

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double length;
    double width;
    double height;
    double totalArea, volume;

    //length = 5;
    //width = 6;
    //height = 10;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter heigth: ";
    cin >> height;

    volume = length * width * height;
    totalArea = 2 * (length * width + width * height + height * length);

    cout << "Volume = " << volume << endl;
    cout << "Total Area " << totalArea << endl;

}

/*
Program Output:
Enter length: 5
Enter width: 30
Enter heigth: 10
Volume = 1500
Total Area 1000

C:\Thana\Spring 23\CIS06\InputOutput\x64\Debug\InputOutput.exe (process 13536) exited with code 0.
Press any key to close this window . . .
*/


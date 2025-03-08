// LoopExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>\

using namespace std;

int main()
{
    int counter = 0;
    int max;

    cout << "Enter number of asterisks (1 - 100): ";
    cin >> max;

    while ((max < 1) || (max > 100)) {
        cout << "Please enter a number between 1 - 100: ";
        cin >> max;
    }

    cout << "------- Before 'while' Loop ------" << endl;
    while (counter < max) {
        cout << "*";
        counter = counter + 1;
    }
    cout << endl;
    cout << "------- After 'while' Loop ------" << endl;
    cout << endl;

    cout << "------- Before 'for' Loop ------" << endl;
    for (int counter1 = 0; counter1 < max; counter1 = counter1 + 1){
        cout << "*";
      
    }
    cout << endl;
    cout << "------- After 'for' Loop ------" << endl;
    cout << endl;

    cout << "------- Before 'do-while' Loop ------" << endl;
    int counter2 = 0;
    do {
        cout << "*";
        counter2 = counter2 + 1;

    } while (counter2 < max);
    cout << endl;
    cout << "------- After 'do-while' Loop ------" << endl;

}

/*OUTPUT:
Enter number of asterisks (1 - 100): -6
Please enter a number between 1 - 100: -10
Please enter a number between 1 - 100: 0
Please enter a number between 1 - 100: 150
Please enter a number between 1 - 100: 75
------- Before 'while' Loop ------
***************************************************************************
------- After 'while' Loop ------

------- Before 'for' Loop ------
***************************************************************************
------- After 'for' Loop ------

------- Before 'do-while' Loop ------
***************************************************************************
------- After 'do-while' Loop ------

C:\Thana\Spring 23\CIS06\LoopExamples\x64\Debug\LoopExamples.exe (process 12380) exited with code 0.
Press any key to close this window . . .*/


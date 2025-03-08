// ConditionalExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double due, paid, bal;
    double temp;

    cout << "Enter amount paid: ";
    cin >> paid;
    cout << "Enter amount due: ";
    cin >> due;
    bal = paid - due;
    //if (bal >= 0) {
    if (!(bal < 0)) {
        cout << "Balance = " << bal << endl;
    }
    else {
        cout << "Insufficent funds: " << endl;
        cout << "you need to pay $" << bal << endl;
    }
    cout << "--------------------------" << endl;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp < 35) {
        cout << "Too cold" << endl;
        cout << "Need multiple layers." << endl;
    }
    else {
        if (temp < 60) {
            cout << "Cold" << endl;
            cout << "Need one layer of Jacket" << endl;
        }
        else {
            if (temp < 80) {
                cout << "Nice" << endl;
                cout << "Have a nice day" << endl;
            }
            else {
                if (temp < 95) {
                    cout << "Hot" << endl;
                    cout << "Shorts and T-Shirts" << endl;
                }
                else {
                    cout << "Too hot" << endl;
                    cout << "Stay inside and drink a lof of water" << endl;

                }

            }

        }
    }

    cout << "--------------------------" << endl;

    if (temp < 35) {
        cout << "Too cold" << endl;
        cout << "Need multiple layers." << endl;
    }

    if ((35 <= temp) && (temp < 60)) {
        cout << "Cold" << endl;
        cout << "Need one layer of Jacket" << endl;
    }

    if ((60 <= temp) && (temp < 80)) {
         cout << "Nice" << endl;
         cout << "Have a nice day" << endl;
    }

    if ((80 <= temp) && (temp < 95)) {
         cout << "Hot" << endl;
         cout << "Shorts and T-Shirts" << endl;
    }

    if (temp >= 95) {
         cout << "Too hot" << endl;
         cout << "Stay inside and drink a lof of water" << endl;

     }

    cout << "--------------------------" << endl;

    if (temp < 35) {
        cout << "Too cold" << endl;
        cout << "Need multiple layers." << endl;
    }
    else if (temp < 60) {
        cout << "Cold" << endl;
        cout << "Need one layer of Jacket" << endl;
    }
    else if (temp < 80) {
        cout << "Nice" << endl;
        cout << "Have a nice day" << endl;
    }
    else if (temp < 95) {
        cout << "Hot" << endl;
        cout << "Shorts and T-Shirts" << endl;
    }
    else {
        cout << "Too hot" << endl;
        cout << "Stay inside and drink a lof of water" << endl;
    }

    cout << "Program finished" << endl;

}

/*
OUTPUT:
Enter amount paid: 20
Enter amount due: 15.67
Balance = 4.33
--------------------------
Enter the temperature: 83
Hot
Shorts and T-Shirts
--------------------------
Hot
Shorts and T-Shirts
--------------------------
Hot
Shorts and T-Shirts
Program finished

C:\Thana\Spring 23\CIS06\ConditionalExamples\x64\Debug\ConditionalExamples.exe (process 13696) exited with code 0.
Press any key to close this window . . .
*/

// LoopExamples2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;

    cout << "------ Rectangle ------" << endl;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "------ Triangle 1 ------" << endl;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "------ Triangle 2 ------" << endl;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < rows - r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < rows - 1 - r; c++)
        {
            cout << " ";
        }
        for (int c = 0; c < (2 * r + 1); c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*OUTPUT:
Enter number of rows: 10
Enter number of cols: 5
------ Rectangle ------
*****
*****
*****
*****
*****
*****
*****
*****
*****
*****
------ Triangle 1 ------
*
**
***
****
*****
******
*******
********
*********
**********
------ Triangle 2 ------
**********
*********
********
*******
******
*****
****
***
**
*
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************

C:\Thana\Spring 23\CIS06\LoopExamples2\x64\Debug\LoopExamples2.exe (process 10088) exited with code 0.
Press any key to close this window . . .*/


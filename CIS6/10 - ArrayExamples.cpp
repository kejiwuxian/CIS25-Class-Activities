// ArrayExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10;

int main()
{
    
    //Declare and initialize array
    int x[N];
    int y[N] = { 0 };
    int z[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int sum = 0;
    int max, min;
    int ave;

    srand(time(0));
    // Initialize array
    for (int i = 0; i < N; i++)
    {
        //cout << "Enter grade for x[" << i + 1 << "]: " << endl;
        //cin >> x[i];
        x[i] = rand() % 100;            //Initialize randomly
    }

 
    // Print array;
    for (int i = 0; i < N; i++)
    {
        cout << "Grade for x[" << i + 1 << "]: " << x[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "y[" << i + 1 << "]: " << y[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "z[" << i + 1 << "]: " << z[i] << endl;
    }
    // Sum array
    for (int i = 0; i < N; i++)
    {
        sum = sum + x[i];
    }

    cout << "Sum = " << sum << endl; 

    //Find max and min and average
    max = x[0];
    min = x[0];

    for (int i = 1; i < N; i++)
    {
        if (x[i] > max)
            max = x[i];
        if (x[i] < min)
            min = x[i];
        cout << "Max = " << max << ", Min = " << min << endl;
    }

    cout << "1 --> Max = " << max << endl;
    cout << "2 --> Min = " << min << endl;

    ave = sum / N;

    cout << "Average = " << ave << endl;

    // Copy array
    for (int i = 0; i < N; i++)
    {
        y[i] = x[i];
    }
    
    // Print array;
    for (int i = 0; i < N; i++)
    {
        cout << "y[" << i + 1 << "]: " << y[i] << endl;
    }

    // Swap array contents
    for (int i = 0; i < N; i++)
    {
        int temp = x[i];
        x[i] = z[i];
        z[i] = temp;
    }

    // Print array;
    for (int i = 0; i < N; i++)
    {
        cout << "x[" << i + 1 << "]: " << x[i] << 
            ", z[" << i + 1 << "]: " << z[i] << endl;
    }

    // Search in an array
    int s;
    cout << "Enter search value : " << endl;
    cin >> s;

    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (y[i] == s) {
            index = i;
            break;
        }
    }
    if (index >= 0)
        cout << s << " found at index: " << index << endl;
    else
        cout << s << " not found" << endl;

    for (int i = 0; i < N; i++)
    {
        z[i] = 0;
    }


    //Processing digits
    long long int num;
    cout << "Enter a long number: ";
    cin >> num;

    while (num > 0) {
        int temp = (int) (num % 10);
        z[temp]++;
        cout << "temp = " << temp << ", " << z[temp] << endl;
        num = num / 10L;
    }

    // Print array;
    for (int i = 0; i < N; i++)
    {
        cout << "z[" << i << "]: " << z[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        z[i] = 0;
    }

    cin.ignore();

    //Processing string of digits
    string s1;
    cout << "Enter a long number string: ";
    cin >> s1;

    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int temp = ch - 48;
        z[temp]++;
    }

    // Print array;
    for (int i = 0; i < N; i++)
    {
        cout << "z[" << i << "]: " << z[i] << endl;
    }
}

/*
OUTPUT:
Grade for x[1]: 24
Grade for x[2]: 50
Grade for x[3]: 93
Grade for x[4]: 27
Grade for x[5]: 55
Grade for x[6]: 33
Grade for x[7]: 42
Grade for x[8]: 71
Grade for x[9]: 81
Grade for x[10]: 16
y[1]: 0
y[2]: 0
y[3]: 0
y[4]: 0
y[5]: 0
y[6]: 0
y[7]: 0
y[8]: 0
y[9]: 0
y[10]: 0
z[1]: 1
z[2]: 2
z[3]: 3
z[4]: 4
z[5]: 5
z[6]: 6
z[7]: 7
z[8]: 8
z[9]: 9
z[10]: 10
Sum = 492
Max = 50, Min = 24
Max = 93, Min = 24
Max = 93, Min = 24
Max = 93, Min = 24
Max = 93, Min = 24
Max = 93, Min = 24
Max = 93, Min = 24
Max = 93, Min = 24
Max = 93, Min = 16
1 --> Max = 93
2 --> Min = 16
Average = 49
y[1]: 24
y[2]: 50
y[3]: 93
y[4]: 27
y[5]: 55
y[6]: 33
y[7]: 42
y[8]: 71
y[9]: 81
y[10]: 16
x[1]: 1, z[1]: 24
x[2]: 2, z[2]: 50
x[3]: 3, z[3]: 93
x[4]: 4, z[4]: 27
x[5]: 5, z[5]: 55
x[6]: 6, z[6]: 33
x[7]: 7, z[7]: 42
x[8]: 8, z[8]: 71
x[9]: 9, z[9]: 81
x[10]: 10, z[10]: 16
Enter search value :
71
71 found at index: 7
Enter a long number: 8384906543234
temp = 4, 1
temp = 3, 1
temp = 2, 1
temp = 3, 2
temp = 4, 2
temp = 5, 1
temp = 6, 1
temp = 0, 1
temp = 9, 1
temp = 4, 3
temp = 8, 1
temp = 3, 3
temp = 8, 2
z[0]: 1
z[1]: 0
z[2]: 1
z[3]: 3
z[4]: 3
z[5]: 1
z[6]: 1
z[7]: 0
z[8]: 2
z[9]: 1
Enter a long number string: 83849065432344533536523
z[0]: 1
z[1]: 0
z[2]: 2
z[3]: 7
z[4]: 4
z[5]: 4
z[6]: 2
z[7]: 0
z[8]: 2
z[9]: 1

C:\Thana\Spring 23\CIS06\ArrayExamples\x64\Debug\ArrayExamples.exe (process 8392) exited with code 0.
Press any key to close this window . . .
*/


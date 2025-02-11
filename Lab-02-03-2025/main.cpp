#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//cout << 1 << endl;
	//cout << 2 << endl;
	//cout << 3 << endl;
	//cout << 4 << endl;
	//cout << 5 << endl;

	//for (int i = 1;i <= 5;i++)
	//	cout << i << endl;

	//// how to print 1 to 5 without having 2 factorial. or how to print odd numbers less than 5
	//for (int i = 5;i >0;i--)
	//{
	//	if (i % 2 != 0)
	//		cout << i << endl;
	//}

	//// ask a user to print positive number # print the factorial of that number
	///*
	//* 0!=1
	//* 1!=1
	//* 2!=2*1
	//* 3!=3*2*1
	//*/
	//cout << "Enter a positive number: ";
	//int number;
	//cin >> number;
	//if (number < 0)
	//	cout << "Error! Number is not positive." << endl;
	//else
	//{
	//	int factorial = 1;
	//	for (int i = 1;i <= number;i++)
	//		factorial *= i;
	//	cout << "The factorial of the " << number << ": " << factorial << endl;
	//}

	//int numbers[] = { 1,2,3,4,5 };

	//for (int i = 0;i < sizeof(numbers) / sizeof(int);i++)
	//	cout << numbers[i] << endl;

	//// 2 inputs; 1- is the iterator, 2- is the container
	//cout << "______---______\n";
	//for (int number : numbers)
	//	cout << number << endl;

	//string name = "Light Liu";
	//for (char ch : name)
	//	cout << ch << endl;

	//int i = 1;
	//while (i <= 5)
	//{
	//	// TODO statements
	//	cout << i << endl;
	//	i++;
	//}

	//i = 0;
	//do
	//{
	//	i++;
	//	cout << i << endl;
	//} while (i < 5);

	//int number;
	//do
	//{
	//	cout << "Number: ";
	//	cin >> number;
	//} while (number < 1 || number > 5);

	// break: is to break out the loop
	// continue: to skip an iteration

	//for (int i = 0;i <= 5;i++)
	//{
	//	if (i % 3 == 0)
	//		continue;	// do nothing
	//	cout << i << endl;
	//}

	//while (true)
	//{
	//	cout << "Number: ";
	//	int number;
	//	cin >> number;
	//	if (number >= 1 && number <= 5)
	//		break;
	//	cout << "Error! Enter a number between 1 to 5." << endl;
	//}

	//// Write a program that uses a for loop to find the sum of all multiples of 3 or 5 below 1000.
	//int sum = 0;
	//for (int i = 1;i < 1000;i++)
	//{
	//	if (i % 3 == 0 || i % 5 == 0)
	//	{
	//		sum += i;
	//		cout << i << endl;
	//	}
	//}
	//cout <<"The sum of all multiples of 3 or 5 below 1000 is: " << sum << endl;

	// Using a do-while loop, create a password validator that repeatedly asks the user to enter a valid password until it meets specific criteria (length, inclusion of numbers and special characters).

	//string password;
	//do
	//{
	//	cout << "Please enter your password: ";
	//	cin >> password;
	//	//if (password.length() == 8 && password.find_first_of("0123456789") != string::npos && password.find_first_of(" !\"#$ % &'()*+,-./:;<=>?@[\\]^_`{|}~") != string::npos)
	//	//if (password.length() == 8 && password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos)
	//	//if (password.length() == 8 && password.find_first_not_of("0123456789 !\"#$ % &'()*+,-./:;<=>?@[\\]^_`{|}~") == string::npos)
	//	//	break;
	//	//cout << "Invalid password!" << endl;
	//} while (password.length() < 8 || password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 !\"#$ % &'()*+,-./:;<=>?@[\\]^_`{|}~") != string::npos);
	//cout << "Your new password is: " << password << endl;

	// Write a program using a for loop that reverses the elements of an array without using any additional arrays.

	//int numbers[] = {0,1,2,3,4};

	//cout << "Original array:" << endl;
	//for (int number : numbers)
	//	cout << number << endl;

	//for (int i = 0;i < sizeof(numbers) / sizeof(int) / 2;i++)
	//{
	//	int tmp = numbers[i];
	//	numbers[i] = numbers[sizeof(numbers) / sizeof(int) - i - 1];
	//	numbers[sizeof(numbers) / sizeof(int) - i - 1] = tmp;
	//}

	//cout << "--------------------" << endl;
	//cout << "Reversed array:" << endl;
	//for (int number : numbers)
	//	cout << number << endl;

	// Use nested for loops to print a multiplication table up to 12x12.

	//for (int i = 0;i <= 12;i++)
	//{
	//	for (int j = 0;j <= 12;j++)
	//	{
	//		cout << setw(3) << i * j << " ";
	//	}
	//	cout << endl;
	//}

	// Create a program using a for loop that checks if a number entered by the user is a prime number.

	int n;
	bool is_prime = true;
	cout << "Please enter a positive number: ";
	cin >> n;
	if (n == 0 || n == 1)
		is_prime = false;
	else
		for (int i = 2;i < n / 2;i++)
		{
			if (n % i == 0)
			{
				is_prime = false;
				break;
			}
		}
	cout << n << (is_prime ? " is a prime number" : " is not a prime number") << endl;

	return 0;
}

#include <iostream>
#include <memory>

using namespace std;

void increase_price(double* price)
{
	*price *= 1.2;
}

void swap(int* first, int* second)
{
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	//int number = 10;
	//cout << &number << endl;
	//int* ptr = &number;
	//cout << ptr << endl;
	//cout << *ptr << endl;

	//int* ptr1 = nullptr; // 0 NULL
	//cout << ptr1 << endl;

	//int x = 10;
	//int y = 20;
	//int* ptr = &x;
	//*ptr *= 2;
	//ptr = &y;
	//*ptr *= 3;
	//cout << "x " << x << ", y " << y << endl;
	//cout << *ptr << endl;

	// non const pointer to a const
	//const int x = 10;
	//const int* ptr = &x;
	//int y = 10;
	//ptr = &y;

	// const pointer to a non const
	//int x = 10;
	//int* const ptr = &x;

	// const pointer to a const
	//const int x = 10;
	//const int* const ptr = &x;

	//double price = 100;
	//increase_price(&price);
	//cout << price << endl;

	//int x = 100, y = 200;
	//swap(&x, &y);
	//cout << x << " " << y << endl;

	//int numbers[] = { 1,2,3 };
	//int* ptr = numbers;
	//cout << ptr[1] << endl;
	//cout << *(ptr + 1) << endl;

	//int numbers[] = { 10,20,30 };
	//int* ptr = numbers + size(numbers) - 1;
	//while (ptr >= numbers)
	//{
	//	cout << *ptr << endl;
	//	ptr--;
	//}

	//int* numbers = new int[10];
	//int* number = new int;
	//delete [] numbers;
	//delete number;
	//numbers = nullptr;
	//number = nullptr;

	//int length = 5;
	//int* numbers = new int[length];
	//int entries = 0;
	//while (true)
	//{
	//	cout << "Please enter number: ";
	//	cin >> numbers[entries];
	//	if (cin.fail()) break;
	//	entries++;
	//	if (entries == length)
	//	{
	//		length *= 2;
	//		// create a temp array (twice the size)
	//		int* temp = new int[length];
	//		// copy all the elements
	//		for (int i = 0;i < entries;i++)
	//			temp[i] = numbers[i];
	//		// Have "numbers" pointer point to the new array
	//		delete [] numbers;
	//		numbers = temp;
	//	}
	//}
	//for (int i = 0;i < entries;i++)
	//	cout << numbers[i] << endl;
	//delete [] numbers;

	//unique_ptr<int> x(new int);
	//unique_ptr<int> y = make_unique<int>();
	//auto z = make_unique<int>();
	//auto numbers = make_unique<int[]>(10);

	//shared_ptr<int> a(new int);
	//shared_ptr<int> b = make_shared<int>();
	//auto c = make_shared<int>();
	//auto numbers = make_shared<int[]>(10);

	return 0;
}
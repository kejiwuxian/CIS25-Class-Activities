#include <iostream>
#include <vector>

using namespace std;

void print_number(int numbers[], int size)
{
	for (int i = 0;i < size;i++)
		cout << numbers[i] << endl;
}

int find(int numbers[], int size, int target)
{
	for (int i = 0;i < size;i++)
		if (numbers[i] == target)
			return i;
	return -1;
}

// bubble sort
// selection sort
// insertion sort
// merge sort
// quick sort

void swap(int numbers[], int i, int j)
{
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}

// Normal
void bubble_sort(int numbers[], int size)
{
	for (int pass = 0; pass < size; pass++) {
		for (int i = 1; i < size;i++) {
			if (numbers[i] < numbers[i - 1])
				swap(numbers, i, i - 1);
		}
	}
}

// With recursion
void bubble_sort_recursion(int numbers[], int size)
{
	bool swaped = false;
	for (int i = 1;i < size;i++)
	{
		if (numbers[i] < numbers[i - 1])
		{
			swap(numbers, i, i - 1);
			swaped = true;
		}
	}
	if (swaped) bubble_sort_recursion(numbers, size);
}

int get_validated_int()
{
	int num;
	while (true)
	{
		cout << "Please enter a positive integer: ";
		cin >> num;
		if (cin.fail() || num < 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a positive integer." << endl;
		}
		else break;
	}
	return num;
}

string get_validated_string()
{
	string str;
	while (true)
	{
		cout << "Please enter a non empty string: ";
		cin >> str;
		if (str.empty())
			cout << "Invalid input, Please enter a non empty string." << endl;
		else break;
	}
	return str;
}

char get_yes_or_no()
{
	char choies;
	while (true)
	{
		cout << "Please enter y for yes or n for no: ";
		cin >> choies;
		choies = tolower(choies);
		if (choies == 'y' or choies == 'n')
			break;
		else cout << "Invalid input, Please enter y or n." << endl;
	}
	return choies;
}

int main()
{
	//int numbers[] = { 10,20,30 };
	//for (int i = 0;i < sizeof(numbers) / sizeof(int);i++)
	//	cout << numbers[i] << endl;
	//for (int i = 0;i < size(numbers);i++)
	//	cout << numbers[i] << endl;

	//int first[] = { 1,2,3 };
	//for (int i = 0;i < sizeof(first) / sizeof(int);i++)
	//	cout << first[i] << endl;
	//int second[size(first)];
	//for (int i = 0;i < size(first);i++)
	//	second[i] = first[i];
	//for (auto number : second)
	//	cout << number << endl;

	//int first[] = { 1,2,3 };
	//int second[] = { 1,2,4 };
	//bool areEqual = true;
	//for (int i = 0;i < size(first);i++)
	//{
	//	if (first[i] != second[i])
	//	{
	//		areEqual = false;
	//		cout << (first[i] > second[i] ? "First array is bigger" : "Second array is bigger") << endl;
	//		break;
	//	}
	//}
	//cout << "Is two array equal: " << boolalpha << areEqual << endl;

	//int numbers[] = { 10,20,30 };
	//print_number(numbers, size(numbers));

	//cout << "long long: " << sizeof(long long) << endl;
	//cout << numeric_limits<long long>::min() << endl;
	//cout << numeric_limits<long long>::max() << endl;
	//cout << "size_t: " << sizeof(size_t) << endl;
	//cout << numeric_limits<size_t>::min() << endl;
	//cout << numeric_limits<size_t>::max() << endl;

	// structured binding - c++17
	// unpacking - python
	//int numbers[] = { 10,20,30 };
	//auto [a, b, c] = numbers;
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	//int numbers[] = { 5,6,7,8,3,4,1 };
	//cout << find(numbers, size(numbers), 9) << endl;
	//bubble_sort(numbers, size(numbers));
	//for (auto number : numbers)
	//	cout << number << endl;

	//const int rows = 2;
	//const int columns = 3;
	//int matrix[rows][columns] =
	//{
	//	{12,13,14},
	//	{10,15,16}
	//};
	//for (int row = 0;row < rows;row++)
	//{
	//	for (int col = 0;col < columns;col++)
	//		cout << matrix[row][col] << endl;
	//	cout << endl;
	//}

	//int number = get_validated_int();
	//cout << "You entered: " << number << endl;
	//string str = get_validated_string();
	//cout << "You entered: " << str << endl;
	//char choies = get_yes_or_no();
	//cout << "You entered: " << choies << endl;

	int age;
	double gpa;
	// validate age
	while (true)
	{
		cout << "Please enter your age: " << endl;
		cin >> age;
		if (cin.fail() || age < 1 || age > 120)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid age." << endl;
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}
	// validate age
	while (true)
	{
		cout << "Please enter your gpa: " << endl;
		cin >> gpa;
		if (cin.fail() || gpa < 0 || gpa > 4)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid gpa." << endl;
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}

	return 0;
}
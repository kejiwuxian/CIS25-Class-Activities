#include <iostream>
using namespace std;

int roll_dice()
{
	return rand() % 6 + 1;
}

int main()
{
	srand(time(nullptr));
	cout << roll_dice() << " " << roll_dice() << endl;
}

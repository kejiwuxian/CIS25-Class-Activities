#include <iostream>
#include <iomanip>

using namespace std;

void print_row(int id, string name, double balance, int name_length = 12)
{
	// Set right align, set the width of the id to 5 then set the fill character to '0' so it's zero padded.
	cout << right << setw(5) << setfill('0') << id << "    "
		// Reset the fill character to space, set left align then set the width of the Name column to 16 to align with the header.
		<< setfill(' ')	<< left << setw(name_length + 4) << name.substr(0, name_length)
		// Set the floatfield to fixed then set the precision of the Balance to 2 so it always has 2 decimal places.
		<< "$" << fixed << setprecision(2) << balance << endl;
}

int main()
{
	//int id1 = 12345, id2 = 23456, id3 = 34567; // Testing scenario.

	//string name1 = "A", name2 = "Bob", name3 = "Light The Rich"; // Testing scenario.

	//double balance1 = -100.0, balance2 = 530.25, balance3 = 100000000.0; // Testing scenario.

	int id1 = 1, id2 = 2, id3 = 3;

	string name1 = "Alice", name2 = "Bob", name3 = "Charlie";

	double balance1 = 1000.0, balance2 = 530.25, balance3 = 2040.5;

	// The max name length.
	int name_length = max(max(name1.length(), name2.length()), name3.length());

	int max_balance = static_cast<int>(max(max(balance1, balance2), balance3));

	// The max balance_length
	int balance_length = 4;

	do
	{
		balance_length++;
		max_balance /= 10;
	}
	while (max_balance);

	// Set the width of the title line to 67 so it's at the center of the my console window.
	// Hope your console window size and font size are the same as mine.
	cout << setw(67) << "Daily Report" << endl;

	// Set left align then set the width of the ID column to 9 and the width of the Name column to 16 so they have some space after.
	cout << left << setw(9) << "ID" << setw(name_length + 4) << "Name" << "Balance" << endl;

	// Left align is still in effect. Set the width of the ID and Name column to align with the headers.
	cout << setw(5) << setfill('-') << "" << setw(4) << setfill(' ') << ""
		<< setw(name_length) << setfill('-') << "" << setw(4) << setfill(' ') << ""
		<< setw(balance_length) << setfill('-') << "" << endl;
	//cout << setw(9) << "-----" << setw(16) << "------------" << "----------" << endl;

	print_row(id1, name1, balance1, name_length);
	print_row(id2, name2, balance2, name_length);
	print_row(id3, name3, balance3, name_length);

	return 0;
}

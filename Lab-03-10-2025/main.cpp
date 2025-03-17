#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

void add_contact(map<string, unsigned int>& phonebook, string name, unsigned int number)
{
	phonebook[name] = number;
}

void find_and_print_contact(map<string, unsigned int>& phonebook, string name)
{
	if (phonebook.count(name))
	{
		cout << name << "'s phone number is: " << phonebook[name] << endl;
	}
	else
	{
		cout << name << " is not in the phonebook." << endl;
	}
}

void delete_contact(map<string, unsigned int>& phonebook, string name)
{
	phonebook.erase(name);
}

void print_phonebook(const map<string, unsigned int>& phonebook)
{
	cout << "The phonebook:" << endl;
	for (const auto& pair : phonebook)
		cout << pair.first << "->" << pair.second << endl;
}

bool find_first_repeating(const vector<int>& numbers,int&reapting)
{
	unordered_map<int, int> counters;
	bool found = false;
	for (const auto number : numbers)
	{
		if (counters.count(number))
		{
			reapting = number;
			return true;
		}
		else counters[number] = 1;
	}
	return false;
}

int find_first_repeating(const vector<int>& numbers)
{
	unordered_map<int, int> counters;
	bool found = false;
	for (int i = 0;i < numbers.size();i++)
	{
		if (counters.count(numbers[i]))
		{
			return counters[numbers[i]];
		}
		else counters[numbers[i]] = i;
	}
	return -1;
}

void find_and_print_most_frequent(const vector<int>& numbers)
{
	unordered_map<int, int> counters;
	int max_frequncy = 0;
	for (const auto number : numbers)
	{
		if (counters.count(number))
		{
			counters[number]++;
		}
		else counters[number] = 1;
		if (counters[number] > max_frequncy)
		{
			max_frequncy = counters[number];
		}
	}
	if (max_frequncy > 1)
	{
		for (const auto pair : counters)
		{
			if (pair.second == max_frequncy)
			{
				cout << "One of the most frequent number is: " << pair.first << endl;
			}
		}
	}
	else cout << "No repeating number." << endl;
}

void update_leaderboard(map<string, int>& leaderboard, string name, int score)
{
	leaderboard[name] = score;
}

int main() {
	// Implement a Phonebook Using std::map, use unsigned int as value so it can fit a phone number which won't be negtive
	map<string, unsigned int> phonebook;
	// Add new contacts
	phonebook["Bob"] = 3412345678;
	phonebook["Alice"] = 3412345679;
	phonebook["Boby"] = 3412345680;
	phonebook.insert({ "Charlie",3412345681 });
	// Find a contact’s phone number.
	if (phonebook.count("Alice"))
	{
		cout << "Alice's phone number is: " << phonebook["Alice"] << endl;
	}
	else
	{
		cout << "Alice is not in the phonebook." << endl;
	}
	// Delete a contact
	phonebook.erase("Boby");
	// Print all contacts in sorted order.
	cout << "The phonebook:" << endl;
	for (const auto& pair : phonebook)
		cout << pair.first << "->" << pair.second << endl;
	cout << "Unknow contact's number: " << phonebook["Ali"] << endl;
	cout << endl;

	// Implement a Phonebook Using std::map, use unsigned int as value so it can fit a phone number which won't be negtive
	map<string, unsigned int> phonebook1;
	// Add new contacts
	add_contact(phonebook1, "Bob", 3412345678);
	add_contact(phonebook1, "Alice", 3412345679);
	add_contact(phonebook1, "Boby", 3412345680);
	add_contact(phonebook1, "Charlie", 3412345681);
	// Find a contact’s phone number.
	find_and_print_contact(phonebook1, "Alice");
	// Delete a contact
	delete_contact(phonebook1, "Boby");
	// Print all contacts in sorted order.
	print_phonebook(phonebook1);
	cout << endl;

	//unordered_map<int, int> counters;
	//bool found = false;
	//while (!found)
	//{
	//	while (true)
	//	{
	//		int number;
	//		cout << "Please enter the next integer: ";
	//		cin >> number;
	//		if (cin.fail())
	//		{
	//			cin.clear();
	//			cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//			cout << "Invalid input, Please enter a valid number." << endl;
	//		}
	//		else
	//		{
	//			if (counters.count(number))
	//			{
	//				counters[number]++;
	//				if (!found)
	//				{
	//					cout << "The first repeating number is: " << number << endl;
	//					found = true;
	//				}
	//			}
	//			else counters[number] = 1;
	//			break;
	//		}
	//	}
	//}
	
	//int N;
	//while (true)
	//{
	//	cout << "Please enter the number of itergers: ";
	//	cin >> N;
	//	if (cin.fail() || N < 0)
	//	{
	//		cin.clear();
	//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//		cout << "Invalid input, Please enter a valid positive number." << endl;
	//	}
	//	else break;
	//}
	//vector<int> numbers(N);
	//for (int i = 0;i < N;i++)
	//{
	//	while (true)
	//	{
	//		cout << "Please enter the " << i + 1 << "th interger: ";
	//		cin >> numbers[i];
	//		if (cin.fail())
	//		{
	//			cin.clear();
	//			cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//			cout << "Invalid input, Please enter a valid number." << endl;
	//		}
	//		else break;
	//	}
	//}
	//int repeating;
	//if (find_first_repeating(numbers, repeating))
	//{
	//	cout << "The first repeating number is: " << repeating << endl;
	//}
	//else
	//	cout << "No repeating number." << endl;
	//int index = find_first_repeating(numbers);
	//if (index >= 0)
	//{
	//	cout << "The first repeating number is: " << numbers[index] << endl;
	//}
	//else
	//	cout << "No repeating number.";
	//find_and_print_most_frequent(numbers);

	// Implement a leaderboard where:
	// Players are stored with their scores (std::map<std::string, int>).
	map<string, int> leaderboard;
	leaderboard.insert({ "Charlie",45 });
	leaderboard["Bob"] = 12;
	leaderboard["Alice"] = 23;
	leaderboard["Boby"] = 21;
	// Players can update their scores.
	update_leaderboard(leaderboard, "Boby", 25);
	// The leaderboard must remain sorted.
	cout << "The leaderboard:" << endl;
	for (const auto& pair : leaderboard)
		cout << pair.first << "->" << pair.second << endl;
	cout << endl;

	return 0;
}
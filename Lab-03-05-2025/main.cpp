#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
	//			array   vector
	// access   O(1)	O(1)
	// search   O(n)	O(n)
	// insert   O(n)	O(n)
	// delete   O(n)	O(n)
	// sort	 
	// memory   

	// O(1), O(log n), O(sqrt(n)), O(n)
	// O(n log n), O(n^2), O(n^3), O(2^n), O(n!)

	// map - key value pair
	// map 1 - ordered map - red black tree
	// map 2 - unorderd map - hash table

	map<string, int> student_grades;	// ordered map
	student_grades["Bob"] = 88;
	student_grades["Alice"] = 95;
	student_grades["Boby"] = 100;	// using []
	student_grades.insert({ "Charlie",72 });
	student_grades.insert({ "Ali",40 });	// using the insert()
	student_grades.insert(make_pair("Light0", 72));	// using make_pair()
	for (const auto& pair : student_grades)
		cout << pair.first << "->" << pair.second << endl;
	//cout << "Student " << pair.first << "'s grade is " << pair.second << endl;
	auto it = student_grades.find("Ali");
	if (it != student_grades.end())
		cout << "Ali's grade: " << it->second << endl;
	cout << endl;

	// Erase elementes
	student_grades.erase("Boby");
	// Check if a key exists
	if (student_grades.count("Alice"))
		cout << "Alice exists in the map" << endl;
	cout << endl;

	map<int, vector<string>, greater<int>>leaderboard;
	leaderboard[90].push_back("Bob");
	leaderboard[80].push_back("Charlie");
	leaderboard[1000].push_back("Light");
	leaderboard[90].push_back("Let's see");
	for (const auto& pair : leaderboard)
		for (const auto& name : pair.second)
			cout << pair.first << "->" << name << endl;
	cout << endl;

	unordered_map<string, int> student_grades_unordered;	// unordered map
	student_grades_unordered["Bob"] = 88;
	student_grades_unordered["Alice"] = 95;
	student_grades_unordered["Boby"] = 100;
	student_grades_unordered.insert({ "Charlie",72 });
	for (const auto& pair : student_grades_unordered)
		cout << pair.first << "->" << pair.second << endl;
	cout << endl;
	return 0;
}
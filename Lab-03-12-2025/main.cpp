#include <iostream>
#include <map>
#include <vector>

using namespace std;

void update_leaderboard(multimap<int, string, greater<int>>& leaderboard, string name, int score);
void update_leaderboard(multimap<int, string, greater<int>>& leaderboard, string name, int score, int old_score);
void print_leaderboard(const multimap<int, string, greater<int>>& leaderboard);

void update_leaderboard(map<int, vector<string>, greater<int>>& leaderboard, string name, int score);
void update_leaderboard(map<int, vector<string>, greater<int>>& leaderboard, string name, int score, int old_score);
void print_leaderboard(const map<int, vector<string>, greater<int>>& leaderboard);

// ADT Abstract Data Type - custom data type - struct, class
struct Date	// PascalCase
{
	short release_year = 1980;
	short release_month = 1;
	short release_day = 1;
};

ostream& operator<<(ostream& os, const Date& s) {
	os << "Data { release_year: " << s.release_year << ", release_month: " << s.release_month << ", release_day: " << s.release_day << " }";
	return os;
}

struct Movie
{
	string title = "";
	Date release_date;
	bool is_popular = false;
};

ostream& operator<<(ostream& os, const Movie& s) {
	os << "Movie { title: " << s.title << ", release_date: " << s.release_date << ", is_popular: " << s.is_popular << " }";
	return os;
}

struct City
{
	string name;
	string state;
};

ostream& operator<<(ostream& os, const City& s) {
	os << "City { Name: " << s.name << ", state: " << s.state << " }";
	return os;
}

struct Address
{
	string street;
	City city;
	int zip_code;
};

ostream& operator<<(ostream& os, const Address& s) {
	os << "Address { street: " << s.street << ", city: " << s.city << ", zip_code: " << s.zip_code << " }";
	return os;
}

struct Customer
{
	int id;
	string name;
	string email;
	Address address;
};

ostream& operator<<(ostream& os, const Customer& s) {
	os << "Customer { ID: " << s.id << ", Name: " << s.name << ", email: " << s.email << ", address: " << s.address << " }";
	return os;
}

int main() {
	Customer customer;
	cout << "Please enter id: ";
	cin >> customer.id;
	cout << "Please enter name: ";
	cin >> customer.name;
	cout << "Please enter email: ";
	cin >> customer.email;
	customer.address = { "Bancroft Way",{"Berkeley","CA"},94704 };
	cout << customer << endl;

	Movie movie;
	movie.release_date = { 1984,1,1 };
	movie.title = "Terminator";
	movie.is_popular = true;
	cout << movie << endl;

	Movie movie1 = { "Terminator",{ 1984,1,1 },true };
	cout << movie1 << endl;

	// C++ Structure binding
	// JS Destructing
	// Python Unpacking
	auto [title, release_date, is_popular] {movie1};
	cout << "Movie { title: " << title << ", release_date: " << release_date << ", is_popular: " << is_popular << " }" << endl;

	// Movie movies[5];
	vector<Movie> movies;
	Movie movie2 = { "Terminator",{ 1984,1,1 },true };
	movies.push_back(movie2);
	movies.push_back({ "WallE",{ 1985,1,1 },true });
	for (const auto& mov : movies)
	{
		cout << mov << endl;
	}

	multimap<int, string, greater<int>> leaderboard_multimap;
	leaderboard_multimap.insert({ 45,"Charlie" });
	leaderboard_multimap.insert({ 12,"Bob" });
	leaderboard_multimap.insert({ 23,"Alice" });
	leaderboard_multimap.insert({ 21,"Boby" });
	// Print all.
	print_leaderboard(leaderboard_multimap);
	cout << endl;
	// Players can update their scores.
	update_leaderboard(leaderboard_multimap, "Boby", 25);
	update_leaderboard(leaderboard_multimap, "Boby", 26, 25);
	// Print all.
	print_leaderboard(leaderboard_multimap);
	cout << endl;

	map<int, vector<string>, greater<int>> leaderboard;
	leaderboard[45].push_back("Charlie");
	leaderboard[12].push_back("Bob");
	leaderboard[23].push_back("Alice");
	leaderboard[21].push_back("Boby");
	// Print all.
	print_leaderboard(leaderboard);
	cout << endl;
	// Players can update their scores.
	update_leaderboard(leaderboard, "Boby", 25);
	update_leaderboard(leaderboard, "Boby", 26, 25);
	// Print all.
	print_leaderboard(leaderboard);
	cout << endl;

	int key = 23;
	auto lb = leaderboard_multimap.lower_bound(key);
	if (lb != leaderboard_multimap.end())
	{
		cout << "The lower bound of " << key << " is: " << (*lb).first << " -> " << lb->second << endl;
	}
	else
	{
		cout << "No lower bound for " << key << endl;
	}

	auto ub = leaderboard_multimap.upper_bound(key);
	if (ub != leaderboard_multimap.end())
	{
		cout << "The upper bound of " << key << " is: " << (*ub).first << " -> " << ub->second << endl;
	}
	else
	{
		cout << "No upper bound for " << key << endl;
	}
	return 0;
}

void update_leaderboard(multimap<int, string, greater<int>>& leaderboard, string name, int score)
{
	for (auto it = leaderboard.begin();it != leaderboard.end();it++)
	{
		if (it->second == name)
		{
			leaderboard.erase(it);
			leaderboard.insert({ score,name });
			break;
		}
	}
}

void update_leaderboard(multimap<int, string, greater<int>>& leaderboard, string name, int score, int old_score)
{
	const auto lower = leaderboard.lower_bound(old_score);
	const auto upper = leaderboard.upper_bound(old_score);
	for (auto it = lower;it != upper;it++)
	{
		if (it->second == name)
		{
			leaderboard.erase(it);
			leaderboard.insert({ score,name });
			break;
		}
	}
}

void print_leaderboard(const multimap<int, string, greater<int>>& leaderboard)
{
	cout << "The leaderboard:" << endl;
	for (const auto& pair : leaderboard)
		cout << pair.first << " - " << pair.second << endl;
	cout << endl;
}

void update_leaderboard(map<int, vector<string>, greater<int>>& leaderboard, string name, int score)
{
	for (auto& pair : leaderboard)
	{
		for (auto it = pair.second.begin();it != pair.second.end();it++)
		{
			if (*it == name)
			{
				pair.second.erase(it);
				leaderboard[score].push_back(name);
				break;
			}
		}
	}
}

void update_leaderboard(map<int, vector<string>, greater<int>>& leaderboard, string name, int score, int old_score)
{
	const auto lower = leaderboard.lower_bound(old_score);
	const auto upper = leaderboard.upper_bound(old_score);
	for (auto it1=lower;it1!=upper;it1++)
	{
		for (auto it2 = it1->second.begin();it2 != it1->second.end();it2++)
		{
			if (*it2 == name)
			{
				it1->second.erase(it2);
				leaderboard[score].push_back(name);
				break;
			}
		}
	}
}

void print_leaderboard(const map<int, vector<string>, greater<int>>& leaderboard)
{
	cout << "The leaderboard:" << endl;
	for (const auto& pair : leaderboard)
		for (const auto& name : pair.second)
			cout << name << " - " << pair.first << endl;
}
#include <iostream>
#include <string>

using namespace std;

struct Date
{
	short year;
	short month;
	short day;
	float time;
};

struct Movie
{
	string title;
	Date release_date;
	bool is_popular;
	string director;
};

ostream& operator<<(ostream& stream, const Date& date);

ostream& operator<<(ostream& stream, const Movie& movie);

Movie input_movie();

int main()
{
	cout << input_movie() << endl;
	return 0;
}

ostream& operator<<(ostream& stream, const Date& date)
{
	return stream << "{ year: " << date.year << ", month: " << date.month << ", day: " << date.day << ", time: " << date.time << " }";
}

ostream& operator<<(ostream& stream, const Movie& movie)
{
	return stream << "{ title: " << movie.title << ", release_date: " << movie.release_date << ", is_popular: " << movie.is_popular << ", director: " << movie.director << " }";
}

void input_date(Date& date)
{
	// Input year
	while (true)
	{
		int input;
		cout << "Please enter the year: ";
		cin >> input;
		if (cin.fail() || input < 0 || input > 2025)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid year that's not before Jesus nor in the future." << endl;
		}
		else
		{
			date.year = input;
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Input month
	while (true)
	{
		int input;
		cout << "Please enter the month: ";
		cin >> input;
		if (cin.fail() || input < 1 || input > 12)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid month." << endl;
		}
		else
		{
			date.month = input;
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Input day
	while (true)
	{
		int input;
		cout << "Please enter the day: ";
		cin >> input;
		if (cin.fail() || input < 1 || input > 31)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid day of month." << endl;
		}
		else
		{
			date.day = input;
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Input day
	while (true)
	{
		float input;
		cout << "Please enter the time: ";
		cin >> input;
		if (cin.fail() || input < 0 || input >= 24)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, Please enter a valid time of day." << endl;
		}
		else
		{
			date.time = input;
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

Movie input_movie()
{
	Movie movie;

	// Input title
	cout << "Please enter the title: ";
	getline(cin, movie.title);

	// Input release date
	cout << "Please enter the release date: " << endl;
	input_date(movie.release_date);

	// Input is popular
	while (true)
	{
		string input;
		cout << "Please enter if popular (t for true, f for false): ";
		getline(cin, input);
		if (input == "t" || input == "T")
		{
			movie.is_popular = true;
			break;
		}
		else if (input == "f" || input == "F")
		{
			movie.is_popular = false;
			break;
		}
	}

	// Input director
	cout << "Please enter the director: ";
	getline(cin, movie.director);

	return movie;
}
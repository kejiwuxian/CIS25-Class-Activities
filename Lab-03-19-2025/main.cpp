#include <iostream>

using namespace std;

struct Date
{
	short year = 1980;
	short month = 1;
	short day = 1;
	float time = 1;
	bool equals(const Date& date) const;
	bool operator==(const Date& date) const;
};

bool Date::equals(const Date& date) const
{
	return date.year == year &&
		date.month == month &&
		date.day == day &&
		date.time == time;
}

bool Date::operator==(const Date& date) const
{
	return date.year == year &&
		date.month == month &&
		date.day == day &&
		date.time == time;
}

struct Movie
{
	string title = "";
	Date release_date;
	bool is_popular = false;
	string director = "";
	bool equals(const Movie& movie) const;
	bool operator==(const Movie& movie) const;
};

bool Movie::equals(const Movie& movie) const
{
	return movie.title == title &&
		movie.release_date.equals(release_date) &&
		movie.is_popular == is_popular &&
		movie.director == director;
}

bool Movie::operator==(const Movie& movie) const
{
	return movie.title == title &&
		movie.release_date.equals(release_date) &&
		movie.is_popular == is_popular &&
		movie.director == director;
}

bool equals(const Date&, const Date&);
bool equals(const Movie&, const Movie&);

int main()
{
	Date date1 = { 1984,1,1 };
	Date date2 = { 1984,1,1 };
	Movie movie = { "Terminator",{ 1984,6,1 },true };
	Movie other_movie = { "Terminator",date2,true };

	if (movie.title == other_movie.title &&
		movie.release_date.year == other_movie.release_date.year &&
		movie.release_date.month == other_movie.release_date.month &&
		movie.release_date.day == other_movie.release_date.day &&
		movie.release_date.time == other_movie.release_date.time &&
		movie.is_popular == other_movie.is_popular &&
		movie.director == other_movie.director)
		cout << "Equal" << endl;
	else
		cout << "Not Equal" << endl;

	return 0;
}

bool equals(const Date& date, const Date& other_date)
{
	return date.year == other_date.year &&
		date.month == other_date.month &&
		date.day == other_date.day &&
		date.time == other_date.time;
}

bool equals(const Movie& movie, const Movie& other_movie)
{
	//return movie.title == other_movie.title &&
	//	movie.release_date.release_year == other_movie.release_date.release_year &&
	//	movie.release_date.release_month == other_movie.release_date.release_month &&
	//	movie.release_date.release_day == other_movie.release_date.release_day &&
	//	movie.release_date.release_time == other_movie.release_date.release_time &&
	//	movie.is_popular == other_movie.is_popular &&
	//	movie.director == other_movie.director;
	return movie.title == other_movie.title &&
		equals(movie.release_date, other_movie.release_date) &&
		movie.is_popular == other_movie.is_popular &&
		movie.director == other_movie.director;
}
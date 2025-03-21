#include <iostream>

using namespace std;

// ADT Abstract Data Type - custom data type - struct, class
struct Date	// PascalCase
{
	short year = 1980;
	short month = 1;
	short day = 1;
	bool operator!=(const Date& date) const;
};

ostream& operator<<(ostream& os, const Date& s)
{
	os << "Data { release_year: " << s.year << ", release_month: " << s.month << ", release_day: " << s.day << " }";
	return os;
}

bool operator==(const Date& date1, const Date& date2)
{
	return date1.year == date2.year &&
		date1.month == date2.month &&
		date1.day == date2.day;
}

bool Date::operator!=(const Date& date) const
{
	return !(*this == date);
}

struct Movie
{
	string title = "";
	Date release_date;
	bool is_popular = false;
	// Bad practice??? Having function definition inside a struct
	bool equals(const Movie& movie) const;
	static void print(const Movie& movie);
	void print() const;
};

bool Movie::equals(const Movie& movie) const
{
	return title == movie.title &&
		release_date.year == movie.release_date.year &&
		release_date.month == movie.release_date.month &&
		release_date.day == movie.release_date.day &&
		is_popular == movie.is_popular;
}

void Movie::print(const Movie& movie)
{
	cout << "Movie { title: " << movie.title
		<< ", release_date:  { release_year: " << movie.release_date.year
		<< ", release_month: " << movie.release_date.month
		<< ", release_day: " << movie.release_date.day
		<< " }, is_popular: " << movie.is_popular << " }" << endl;
}

void Movie::print() const
{
	cout << "Movie { title: " << title 
		<< ", release_date:  { release_year: " << release_date.year
		<< ", release_month: " << release_date.month
		<< ", release_day: " << release_date.day
		<< " }, is_popular: " << is_popular << " }" << endl;
}

ostream& operator<<(ostream& os, const Movie& s) {
	os << "Movie { title: " << s.title << ", release_date: " << s.release_date << ", is_popular: " << s.is_popular << " }";
	return os;
}

bool operator==(const Movie& movie1, const Movie& movie2) {
	return movie1.title == movie2.title &&
		movie1.release_date == movie2.release_date &&
		movie1.is_popular == movie2.is_popular;
}

bool operator!=(const Movie& movie1, const Movie& movie2) {
	return !(movie1 == movie2);
}

bool compare_movie(const Movie& movie1, const Movie& movie2);

struct Point
{
	double x;
	double y;
	bool operator==(const Point& point) const;
};

bool Point::operator==(const Point& point) const
{
	return x == point.x && y == point.y;
}

ostream& operator<<(ostream& stream, const Point& point)
{
	return stream << "{ x: " << point.x << ", y: " << point.y << "}";
}

int main()
{
	Movie movie1 = { "Terminator",{ 1984,6,1 },true };
	Movie movie2 = { "Terminator",{ 1984,6,1 },true };
	// Compare struct
	cout << boolalpha << (movie1 == movie2) << endl;
	//if (movie1.title == movie2.title &&
	//	movie1.release_date.release_year == movie2.release_date.release_year &&
	//	movie1.release_date.release_month == movie2.release_date.release_month &&
	//	movie1.release_date.release_day == movie2.release_date.release_day &&
	//	movie1.is_popular == movie2.is_popular)
	//	cout << "Equal" << endl;
	//else
	//	cout << "Not Equal" << endl;
	cout << (compare_movie(movie1, movie2) ? "Equal" : "Not Equal") << endl;
	cout << (movie1.equals(movie2) ? "Equal" : "Not Equal") << endl;
	movie1.print();

	Point point1 = { 1,2 };
	Point point2 = { 1,2 };
	cout << point1 << (point1 == point2 ? " is equal to " : " is not equal to ") << point2 << endl;

	return 0;
}

bool compare_movie(const Movie& movie1, const Movie& movie2)
{
	return movie1.title == movie2.title &&
		movie1.release_date.year == movie2.release_date.year &&
		movie1.release_date.month == movie2.release_date.month &&
		movie1.release_date.day == movie2.release_date.day &&
		movie1.is_popular == movie2.is_popular;
}

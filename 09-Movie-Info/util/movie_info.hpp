#pragma once
#include <iostream>

using namespace std;

namespace movie_info
{
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

	void input_date(Date& date);

	Movie input_movie();
}
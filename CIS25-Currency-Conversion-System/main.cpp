#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum currencies
{
	USD = 0,
	EUR,
	GBP,
	JPY
};

// double currency_conversion_rates_table[4][4] =
// {
//     { USD to USD, USD to EUR, USD to GBP, USD to JPY },
//     { EUR to USD, EUR to EUR, EUR to GBP, EUR to JPY },
//     { GBP to USD, GBP to EUR, GBP to GBP, GBP to JPY },
//     { JPY to USD, JPY to EUR, JPY to GBP, JPY to JPY }
// };
const double rates_table[4][4] =
{
	{1.0,0.96,0.80,155.10},
	{1.04,1.0,0.84,161.60},
	{1.25,1.19,1.0,192.93},
	{0.0065,0.0063,0.0053,1.0}
};

const string currency_names[] = { "USD","EUR","GBP","JPY","usd","eur","gbp","jpy" };

currencies input_currency()
{
	string in;
	while (true)
	{
		getline(cin, in);
		for (int i = 0;i < 8;i++)
		{
			if (in == currency_names[i])
				// cast int to currencies enum so it matchs the return type of this function
				return static_cast<currencies>(i % 4);
		}
		cout << "You entered: " << in;
		cout << "Please enter a valid currency (USD, EUR, GBP, or JPY): ";
	}
}

bool input_bool()
{
	string in;
	while (true)
	{
		getline(cin, in);
		if (in == "Y" || in =="y") return true;
		if (in == "N" || in =="n") return false;
		cout << "Please enter Y for Yes, N for No: ";
	}
}

// Convert currency from one type to another
double convert_currency(double amount, currencies from, currencies to, double table[4][4])
{
	// Implicit convertion from currencies to int
	return amount * table[from][to];
}

int main()
{
	double(*table)[4];

	double amount;
	currencies from, to;

	cout << "Please enter the amount: ";
	cin >> amount;
	cin.ignore();
	cout << "Hint: Inputs are case insensitive." << endl;
	cout << "Please enter the currency (USD, EUR, GBP, or JPY): ";
	from = input_currency();
	cout << "Please enter the target currency (USD, EUR, GBP, or JPY): ";
	to = input_currency();
	cout << "Is there a promotion (Y for Yes, N for No): ";

	if (input_bool())
	{
		// cast a void pointer of dynamically allocated array to a pointer of an array of 4 doubles so it matches the type of the non const currency conversion rates table
		table = static_cast<double (*)[4]>(malloc(sizeof(rates_table)));
		if (table)
		{
			//memcpy(static_cast<void*>(table), static_cast<const void*>(rates_table), sizeof(rates_table));

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0;j < 4;j++)
				{
					table[i][j] = rates_table[i][j] * 1.1;
				}
			}
		}
		else
		{
			cerr << "Memory allocation failed!" << endl;
			return -1;
		}
	}
	else
	{
		// cast a const pointer of an array of 4 doubles to a non const pointer of an array of 4 doubles
		// Note: Even though the result of this cast is a non const pointer, trying to modify its value is an undefined behavior
		table = const_cast<double (*)[4]>(rates_table);
	}

	cout << fixed << setprecision(2) << endl
		// Implicit convertion from currencies to int
		<< "1 " << currency_names[from] << " = " << table[from][to] << setw(4) << currency_names[to] << endl << endl;

	cout << fixed << setprecision(2) << endl
		<< setfill('#') << setw(43) << "# ---> " << setw(37) << "#" << setfill(' ') << endl
		// Implicit convertion from currencies to int
		<< "#" << setw(19) << currency_names[from] << setw(24) << "# ---> #" << setw(19) << currency_names[to] << setw(17) << "#" << endl
		<< setfill('#') << setw(43) << "# ---> " << setw(37) << "#" << setfill(' ') << endl
		<< "#" << setw(34) << amount << " # ---> #" << setw(34) << convert_currency(amount, from, to, table) << " #" << endl
		<< setfill('#') << setw(43) << "# ---> " << setw(37) << "#" << setfill(' ') << endl;

	return 0;
}

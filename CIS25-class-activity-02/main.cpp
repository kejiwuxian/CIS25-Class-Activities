#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const string suits[] = { "Clubs","Diamonds","Hearts","Spades" };
const string ranks[] = { "Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };

int main()
{
	// Use uint64_t instead of long to make sure it's 64 bits.
	uint64_t elapsSeconds = time(nullptr);

	srand(elapsSeconds);

	// With one random number:
	//unsigned char random = rand();
	//unsigned char suit = random & 3;
	//unsigned char rank = (random >> 2) % 13;

	// With two random numbers:
	unsigned char rank = rand() % 13;
	unsigned char suit = rand() % 4;

	cout << setfill('*') << setw(40) << "*" << endl << endl
		<< "Casino Card:" << right << setfill('-') << setw(28) << ranks[rank] + " of " + suits[suit] << endl << endl
		<< setfill('*') << setw(40) << "*" << endl;

	return 0;
}

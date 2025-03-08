​
lightdark@lonedark.com
​
#include <iostream>
#include <cstdlib>  // import for rand()
#include <iomanip>  // input output manipulation import.


using namespace std;

int main() {
    double price = 99.9;        // initializing variables
   
    float interestRate = 3.5f;   // compiler treats this as double if initialized normally, need f to specify
    long fileSize = 900L;        // compiler treats this as integer if initialized normally, need L to specify
   
    auto isValid = false;       // auto tells compiler to figure out data type of variable, here will be bool

   
    int raiseRate = 1.2;        // This gives a warning. Program will still compile, but use integer
//    int otherRate = {1.2};    // Brace initializer. This gives an error, and program will not compile
    int otherOtherRate = {};    // another way of initializing to 0
   
   
    int binaryNumber = 0b11111111;    // 0b before binary value to state integer is binary
    int hexadecimalNumber = 0xFF;     // hexadecimal integer
//    cout << binaryNumber << endl;
   
   
    unsigned int posNumber = 255;      // unsigned data type, we are sure value of  variable won't be negative
//    cout << posNumber << endl;    // where posNumber is negative, a random number takes its place instead
   
   
    int num = 1'000'000;        // This will evaluate to 1000000
    short anotherNum = num;     // This will evaluate to 16960 and not 1000000, due to data loss and short max
   
   
    int randNum = rand();       // Will be same "random" number each time. MacOS will have 16807, Windows has 41
//    cout << randNum << endl;
   
    srand(5);
    int moreRandNum = rand();       // Random number based on the seed. Different than before, but will repeat same.
//    cout << moreRandNum << endl;
   
    long elapsedSeconds = time(nullptr);     // Time calculated from Jan 1 1971. Use null-pointer parameter passed in.
    srand(elapsedSeconds);      // seed constantly changing with time now.
    int betterRandNum = rand() % 10;    // last digit popped off big random number. Now gives random number 0-9
//    cout << betterRandNum << endl;
   
   
    // Activity: Picking random card 1-6. 2 random numbers. First min/max 0-3 or 1-4, Second 0-12 or 1-13 For cards
    int randomSuit = rand() % 4;
    int randomValue = rand() % 13;
//    cout << "Random Suit: " << randomSuit << " Random Value: " << randomValue << endl;
   
   
    /*
    cout << "spring" << "nice"
    << "summer" << "hot" << endl;   // chaining cout in 1 command rather than 2 seperate calls.
   
    cout << setw(10) << "spring" << setw(10) << "nice" << endl;     // setw includes 10 spacing total, 6 spring 4 blank
    cout << left << setw(10) << "summer" << "hot" << endl;      // left-aligns
    */
   
   
    /*
    cout << fixed << 12.34567 << endl;     // greater accuracy for doubles with fixed, may include extra digits
    cout << setprecision(5) << 12.34567 << endl;    // no rounding done for specified decimal place
     */
   
   
    /*
    cout << sizeof(int) << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;
    // class from standard library. Under numeric_limits class, we have available functions from it
    */
   
   
    /*
    int maxNum = numeric_limits<int>::max();
    cout << maxNum << endl;
    maxNum++;       // max num overflows and wraps around to min num
    cout << maxNum << endl;
    */
   
   
    /*
    string name;
    cout << "Enter your name:" << endl;
//    cin >> name;        // cin imports everything until it sees a space (buffer told to do no more)
    getline(cin, name);     // getline will get whole input from user, including spaces
    cout << "Hi " << name << endl;
    */
   
   
    /*
    int x = 1;
    double y = 2.6;     // casted to int, this will become an integer 2, rather than being auto-narrowed by program
    int z = x + (int)y;     // c-style casting
    int alsoZ = x + static_cast<int>(y);     // c++ casting. Always use this type of casting
    cout << alsoZ << endl;
     */
   
   
    cout << numeric_limits<unsigned int>::min() << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
   
    unsigned int negValue = -1;
    cout << "This should be -1, but it is actually: " << negValue << endl;
   
   
   
   
   
   
   
   
    return 0;
}
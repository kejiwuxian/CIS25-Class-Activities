#include <iostream>
#include <limits>
using namespace std;

void calculateTotalCost(int price, int quantity) {
    if (price * quantity != static_cast<long long>(price) * static_cast<long long>(quantity)) {
        cout << "Error: Multiplication overflow detected!" << endl;
    }
    else {
        unsigned int totalCost = price * quantity;
        cout << "Total cost: " << totalCost << endl;
    }
}

int main() {
    int price = 5000000;    // High price
    int quantity = 1000;    // Large quantity

    calculateTotalCost(price, quantity);  // (A)
    return 0;
}
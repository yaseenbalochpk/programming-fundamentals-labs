
#include <iostream>
using namespace std;

int main() {
    int qty, salesReps;
    double unitsEach;

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter number of sales representatives: ";
    cin >> salesReps;

    if (salesReps != 0) {
        unitsEach = static_cast<double>(qty) / salesReps;
        cout << "Units each = " << unitsEach << endl;
    } else {
        cout << "Sales representatives cannot be zero." << endl;
    }

    return 0;
}

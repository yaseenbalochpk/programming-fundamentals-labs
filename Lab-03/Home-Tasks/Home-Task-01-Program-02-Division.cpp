
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num2 != 0) {
        double quotient = static_cast<double>(num1) / num2;
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }

    return 0;
}

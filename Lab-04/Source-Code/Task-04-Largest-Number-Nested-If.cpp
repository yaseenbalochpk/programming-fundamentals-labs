#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;

    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    if (number1 >= number2) {
        if (number1 >= number3) {
            cout << "Largest number = " << number1 << endl;
        } else {
            cout << "Largest number = " << number3 << endl;
        }
    } else {
        if (number2 >= number3) {
            cout << "Largest number = " << number2 << endl;
        } else {
            cout << "Largest number = " << number3 << endl;
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num1 = 28;
    int num2 = 32;
    int num3 = 37;
    int num4 = 24;
    int num5 = 33;

    int sum = num1 + num2 + num3 + num4 + num5;
    double average = static_cast<double>(sum) / 5;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

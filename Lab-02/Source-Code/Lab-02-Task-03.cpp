#include <iostream>
using namespace std;

int main()
{
    int val1;
    int val2;
    int val3;

    cout << "Please enter your 3 numbers: ";
    cin >> val1 >> val2 >> val3;

    cout << val1 << "\n"
         << val2 << "\n"
         << val3 << "\n";

    cout << val3 << "\n"
         << val2 << "\n"
         << val1 << "\n";

    return 0;
}
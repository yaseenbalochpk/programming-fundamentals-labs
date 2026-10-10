#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a five-digit integer: ";
    cin >> number;

    if (number < 10000 || number > 99999)
    {
        cout << "Please enter a valid five-digit positive integer."
             << endl;
        return 1;
    }

    cout << number / 10000 << "   ";
    cout << (number / 1000) % 10 << "   ";
    cout << (number / 100) % 10 << "   ";
    cout << (number / 10) % 10 << "   ";
    cout << number % 10 << endl;

    return 0;
}
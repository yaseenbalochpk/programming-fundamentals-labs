#include <iostream>
using namespace std;

int main()
{
    int var1, var2, temp;

    cout << "Enter the first integer: ";
    cin >> var1;

    cout << "Enter the second integer: ";
    cin >> var2;

    cout << "Before swapping: var1 = " << var1
         << ", var2 = " << var2 << endl;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "After swapping: var1 = " << var1
         << ", var2 = " << var2 << endl;

    return 0;
}
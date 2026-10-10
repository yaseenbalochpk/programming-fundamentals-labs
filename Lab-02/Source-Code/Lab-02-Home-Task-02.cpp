#include <iostream>
using namespace std;

int main()
{
    char letter;

    cout << "Enter a lowercase English alphabet: ";
    cin >> letter;

    if (letter >= 'a' && letter <= 'z')
    {
        letter = letter - ('a' - 'A');
        cout << "Uppercase letter: " << letter << endl;
    }
    else
    {
        cout << "Please enter a lowercase English alphabet."
             << endl;
    }

    return 0;
}
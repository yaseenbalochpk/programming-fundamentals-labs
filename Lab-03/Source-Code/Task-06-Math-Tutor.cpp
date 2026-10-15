
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;
    int answer = num1 + num2;

    cout << "Math Tutor\n\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;

    cout << "\nPress Enter to reveal the answer...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    cout << "Answer = " << answer << endl;

    return 0;
}

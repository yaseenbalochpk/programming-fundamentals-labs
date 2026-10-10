#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    double distance = sqrt(
        pow(x2 - x1, 2) +
        pow(y2 - y1, 2)
    );

    cout << "Distance between the two points: "
         << distance << endl;

    return 0;
}
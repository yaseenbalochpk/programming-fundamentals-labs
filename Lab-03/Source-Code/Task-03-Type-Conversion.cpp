
#include <iostream>
using namespace std;

int main() {
    int units;
    float mass;
    double weight;

    cout << "Enter units: ";
    cin >> units;

    cout << "Enter mass: ";
    cin >> mass;

    weight = mass * units;

    cout << "Weight = " << weight << endl;

    return 0;
}

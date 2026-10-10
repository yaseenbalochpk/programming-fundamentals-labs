#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.141592653589793;
    double radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of Circle: "
         << PI * radius * radius << endl;

    cout << "\nEnter the length and width of rectangle: ";
    cin >> length >> width;

    cout << "Area of Rectangle: "
         << length * width << endl;

    cout << "\nEnter the base and height of triangle: ";
    cin >> base >> height;

    cout << "Area of Triangle: "
         << base * height * 0.5 << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int x = 10;
    // int y = 20;
    // cout << "The maximum of x and y : " << max(x, y) << endl;

    // double resultOne = floor(1.9);
    // double resultTwo = ceil(1.1);
    // cout << resultOne << endl;
    // cout << resultTwo << endl;

    // cout << pow(4, 2) << endl;

    // Exercise :
    cout << "Enter the radius(r) of the circle : ";
    double radius;
    cin >> radius;

    const double pi = 3.14;

    double area = pi * pow(radius, 2);
    cout << "The area of the circle is : " << area << endl;
    return 0;
}
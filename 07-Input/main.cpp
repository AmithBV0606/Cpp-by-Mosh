#include <iostream>
using namespace std;

int main()
{
    // int age;
    // cout << "Enter Your Age : ";
    // cin >> age; // Taking input from user and store it in variable

    // // Output the entered age
    // cout << "Age entered: " << age << endl;
    // return 0;

    // int x;
    // int y;
    // cout << "Enter the values of x and y : ";
    // cin >> x >> y;
    // cout << "The sum of x and y is : " << x + y << endl;
    // return 0;

    // Exercise :
    double fahrenheit;
    cout << "Enter a temperature in Fahrenheit : ";
    cin >> fahrenheit;

    // Formulae : °C = (°F − 32) × 5/9
    double celsius = (fahrenheit - 32) / 1.8;
    cout << "The " << fahrenheit << " in Celsius is " << celsius << endl;
    return 0;
}

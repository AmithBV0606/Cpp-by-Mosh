#include <iostream>
using namespace std;

// int main()
// {
//     int num;
//     cout << "The number is " << num << endl;
//     return 0;
// }

int main()
{
    int a = 10;
    int b = 20;
    int temp = 0;

    temp = a;
    a = b;
    b = temp;

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Precedence order :
    // 1. ()
    // 2. * and /
    // 3. + and -

    // int x = 1 + 2 * 3;
    int x = (1 + 2) * 3;
    cout << x << endl;

    // Exercise : 
    double a = 10;
    double b = 5;
    // double c = (a + 10) / 3 * b; // 33.3333
    double c = (a + 10) / (3 * b);
    cout << c << endl;

    return 0;
}

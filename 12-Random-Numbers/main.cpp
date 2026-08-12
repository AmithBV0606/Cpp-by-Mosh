#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // long elapsedSeconds = time(0);
    // srand(elapsedSeconds);
    // int random = rand() % 10;
    // cout << random << endl;
    // return 0;

    // Write a program to roll a dice
    cout << "Roll a dice(Y/N) : ";
    string value;
    cin >> value;

    if (value == "Y")
    {
        srand(time(0));
        int dice = (rand() % 5) + 1;
        cout << dice << endl;
        return 0;
    }
    else
    {
        return 0;
    }
}

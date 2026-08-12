#include <iostream>
using namespace std;

int main() {
    double price = 99.99;
    // float interestRate = 2.15f;
    float interestRate = 2.15F;
    // long fileSize = 90000l;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = true;
    
    // auto keyword : is like "let" in javascipt
    auto isItValid = false;
    auto letters = 'a';
    auto fileSizes = 90000L;
    auto fileSizess = 90000;
    auto interestRates = 2.15;
    auto interestRatess = 2.15f;

    // Brace Initialization :
    // int number = 1.2;
    // cout << number << endl;
    int number {};
    cout << number << endl;
    return 0;
}
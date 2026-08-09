#include <iostream>
using namespace std;

int main()
{
    // int x = 10;
    // int y = 20;
    // cout << "X = " << x << endl;
    // cout << "Y = " << y << endl;
    // return 0;

    double sales = 95000;
    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;

    double totalTax = (stateTaxRate * sales) + (countyTaxRate * sales);

    cout << "Total sales is $" << sales << endl;
    cout << "State Tax is 4%, which is $" << stateTaxRate * sales << " of $95,000 worth of sales!!" << endl;
    cout << "County Tax is 2%, which is $" << countyTaxRate * sales << " of $95,000 worth of sales!!" << endl;
    cout << "Total Tax to be paid : $" << totalTax << endl;
    return 0;
}

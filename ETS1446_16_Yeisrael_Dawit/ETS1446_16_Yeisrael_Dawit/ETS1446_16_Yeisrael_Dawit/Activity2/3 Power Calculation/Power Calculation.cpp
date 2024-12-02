#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponent;
    cout << "Enter the base value (x): ";
    cin >> base;
    cout << "Enter the exponent value (y): ";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << "The result of " << base << " raised to the power of " << exponent << " is: " << result << endl;
    cout << "Thanks for using the Power Calculator. Have a great time!" << endl;
    return 0;
}

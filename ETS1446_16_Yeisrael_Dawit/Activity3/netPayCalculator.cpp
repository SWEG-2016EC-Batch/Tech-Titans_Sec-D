#include <iostream>
using namespace std;

int main() {
    double basicSalary, workedHours, bonusRate, overtimeBonusRate = 0.0;
    double grossPay, netPay, pension, tax, overtimePay = 0.0;
    const double pensionRate = 0.07;  // 7% pension rate
    double taxRate;

    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    cout << "Enter the number of worked hours: ";
    cin >> workedHours;
    cout << "Enter the bonus rate: ";
    cin >> bonusRate;

    if (workedHours > 40) {
        cout << "Enter the over-time bonus rate per hour: ";
        cin >> overtimeBonusRate;
        overtimePay = (workedHours - 40) * overtimeBonusRate;
    }


    grossPay = basicSalary + (workedHours * bonusRate) + overtimePay;

 
    pension = grossPay * pensionRate;

    cout << "Enter the tax rate (as a decimal): ";
    cin >> taxRate;

    tax = grossPay * taxRate;

    netPay = grossPay - pension - tax;

    cout << "Gross Pay: " << grossPay << endl;
    cout << "Pension Deduction: " << pension << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}

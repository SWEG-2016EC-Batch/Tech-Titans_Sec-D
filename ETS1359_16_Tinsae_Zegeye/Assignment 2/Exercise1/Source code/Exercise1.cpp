#include <iostream>

using namespace std;

int main() {
    double baseSalary, workedHours, bonusRate, pension = 0.07;
    double bonus = 0, extraWorkedHours = 0;
    double grossSalary, pensionDeduction, taxDeduction, netSalary;
    double taxRate;

    cout << "Enter the base salary: ";
    cin >> baseSalary;
    cout << "Enter the worked hours: ";
    cin >> workedHours;
    cout << "Enter the bonus rate: ";
    cin >> bonusRate;

    if (baseSalary < 200) {
        taxRate = 0.0;
    } else if (baseSalary <= 600) {
        taxRate = 0.10;
    } else if (baseSalary <= 1200) {
        taxRate = 0.15;
    } else if (baseSalary <= 2000) {
        taxRate = 0.20;
    } else if (baseSalary <= 3500) {
        taxRate = 0.25;
    } else {
        taxRate = 0.30;
    }

    if (workedHours > 40) {
        extraWorkedHours = workedHours - 40;
    }

    bonus = extraWorkedHours * bonusRate;
    grossSalary = baseSalary + bonus;
    pensionDeduction = baseSalary * pension;
    taxDeduction = grossSalary * taxRate;
    netSalary = grossSalary - pensionDeduction - taxDeduction;

    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

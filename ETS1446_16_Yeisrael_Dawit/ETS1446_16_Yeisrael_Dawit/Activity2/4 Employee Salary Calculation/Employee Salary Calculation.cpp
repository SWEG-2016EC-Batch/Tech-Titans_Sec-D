#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float hours, bonusRate, baseSalary, grossSalary, netSalary, bonus;
    const float tax = 0.15;
    const float pension = 0.05;
    float tax_deduction;
    float pension_deduction;
    cout << "Enter employee's name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter weekly working hours: ";
    cin >> hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    
    bonus = hours * bonusRate;
    grossSalary = baseSalary + bonus;
    tax_deduction = grossSalary* tax;
    pension_deduction = grossSalary* pension;
    netSalary = grossSalary - tax_deduction - pension_deduction;
    
    cout << "Bonus Payment: " << bonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Net Salary: " << netSalary << endl;
    
    cout << "Thank you for using the Salary Calculator. Have a wonderful day!" << endl;
    return 0;
}

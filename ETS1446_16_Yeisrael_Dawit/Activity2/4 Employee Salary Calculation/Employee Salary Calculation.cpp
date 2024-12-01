#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float hours, bonusRate, baseSalary, grossSalary, netSalary, bonus;
    
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
    netSalary = grossSalary * 0.8; // 5% pension + 15% tax
    
    cout << "Employee Name: " << name << endl;
    cout << "Bonus Payment: " << bonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Net Salary: " << netSalary << endl;
    
    cout << "Thank you for using the Salary Calculator. Have a wonderful day!" << endl;
    return 0;
}

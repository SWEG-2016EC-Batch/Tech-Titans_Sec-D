#include <iostream>
using namespace std;

int main() {
    int numUsers; 
    float weight, height, bmi;

    cout << "How many users' BMI do you want to calculate? ";
    cin >> numUsers;

    for (int i = 1; i <= numUsers; ++i) {
        cout << "User " << i << endl;;

        cout << "Enter weight (kg): ";
        cin >> weight;
        cout << "Enter height (m): ";
        cin >> height;

        bmi = weight / (height * height);
        cout << "BMI is: " << bmi << endl;

        if (bmi < 18.5) {
            cout << "This BMI indicates Underweight" << endl;
        } else if (bmi < 24.9) {
            cout << "This BMI indicates Normal weight" << endl;
        } else {
            cout << "This BMI indicates Overweight" << endl;
        }
    }

    cout << "Thank you for using the BMI Calculator. Stay healthy and keep fit!" << endl;
    cout << "Program ended." << endl;

    return 0;
}

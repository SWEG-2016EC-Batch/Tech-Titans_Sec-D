#include <iostream>
using namespace std;

int main () {
    float weight, height, bmi;
    char choice;
    do {
        cout << "Enter weight (kg): ";
        cin >> weight;
        cout << "Enter height (m): ";
        cin >> height;
        bmi = weight / (height * height);
        cout << "BMI is: " << bmi << endl;
        if (bmi < 18.5){
            cout << "This IBM indicate Underweight" << endl;
        }else if (bmi < 24.9){
            cout << "THis IBM indicate Normal weight" << endl;
        }else{
            cout << "THis IBM indicate Overweight" << endl;
        }
        cout << "Do you want to calculate another BMI? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    
    cout << "Thank you for using the BMI Calculator. Stay healthy and keep fit!" << endl;
    cout << "Programm ended.";


return 0;
}

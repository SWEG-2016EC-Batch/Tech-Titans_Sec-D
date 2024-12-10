#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    char choice;
    do{
        cout<< "Wellcome to Gaming with numbers";
        cout << "Enter an integer: ";
        cin >> num;
        cout << "Menu:";
        cout << "a) Print the reverse of the number" << endl; 
        cout << "b) Count the number of digits in the number" << endl; 
        cout << "c) Find the product of even digits in the number" << endl; 
        cout << "d) Print the first and last digit and their sum" << endl; 
        cout << "e) Swap the first and last digit of the number" << endl; 
        cout << "f) Check if the number is a palindrome" << endl; 
        cout << "g) Find the frequency of each digit in the number" << endl; 
        cout << "h) Check if the number is a Strong number" << endl; 
        cout << "i) Check if the number is a Perfect number" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
        case 'a': {
            int reverse=0, original=num;
            while(original!=0){
                int digit = original % 10;
                reverse = reverse * 10 +digit;
                original /= 10;
            }
            cout << "The reversed integer is: "<< reverse;
            break;
        }case 'b': {
            int original = num, count = 0;
            if (original == 0) {
                count = 1;
            }else {
                while (original!=0)
                {
                   original = original/10;
                   count = count + 1;
                }  
            }
            cout << "Number of digits in your intiger: "<< count;
            break;
        }case 'c': {
            int product = 1;
            int original = num;
            while (original != 0){
            int digit = original % 10;
                if (digit % 2 == 0){
                product *= digit;
                }
            original = original/10;
            }
            cout << "The product of all even numbers in your integer is: "<< product;
            break;
        }case 'd': {
            int lastdigit = num % 10;
            int firtdigit = num;
            while (firtdigit >= 10){
                firtdigit /=10;
            }
            cout << "First digit of your number: "<< firtdigit;
            cout << "Last digit of your number: "<< lastdigit;
            cout << "Sum of the last and the first digit: "<< firtdigit+lastdigit;
            break;
        }case 'e': {
            int original = num, count = 0;
            if (original == 0) {
                count = 1;
            }else {
                while (original!=0){
                   original = original/10;
                   count = count + 1;}  
            }
            int lastdigit = num % 10;
            int firtdigit = num;
            while (firtdigit >= 10){
                firtdigit /=10;
            }
            int swapped = lastdigit * pow(10, count-1) + num % (int)pow(10, count-1);
            swapped -= lastdigit;
            swapped += firtdigit;
            cout << "Swapped number: "<< swapped;
            break;
        }case 'f': {
            int reverse=0, original=num;
            while(original!=0){
                int digit = original % 10;
                reverse = reverse * 10 +digit;
                original /= 10;
            }
            if (num==reverse){
                cout<<"Is palindrome";
            }else {
                cout<<"IS not palindrome";
            }
            break;
        } case 'g': {
            int original = num;
            cout << "Digit count"<< endl;
            for (int digit = 0; digit <=10; digit++){
                int count = 0;
                original = num;
                while (original != 0){
                    if (original % 10 == digit){
                        count++;
                    }
                    original /= 10;
                }
                if (count>0){
                    cout << "Digit "<< digit<<":"<< count<< endl;
                }
            }
            break;
        }case 'h': {
            int sum =0;
            int original = num;
            while (original!=0){
                int digit = original % 10;
                int factorial = 1;
                for (int i=0; i >= digit; i++){
                    factorial *= i;
                }
                sum += factorial;
                original/=10;
            }
            if (sum == num){
                cout <<"Is strong"<< endl;
            }else{
                cout << "IS not strong";
            }
            break;
        }case 'i': {
            int sum = 0;
            for (int i = 0; i<= num/2; i++){
                if (num % i == 0){
                    sum += i;
                }
            }
            if (sum == num){
                cout << num << "Is Perfect";
            }else {
                cout << num << " Is Not perfect";
            }
            break;
        }
           default:
           cout << "Invalid choice";
            break;
        }

    cout << "Do you want to continue?(y/n): ";
    cin >> choice;
    }while (choice =='y'||choice =='Y'); 

    return 0;
}

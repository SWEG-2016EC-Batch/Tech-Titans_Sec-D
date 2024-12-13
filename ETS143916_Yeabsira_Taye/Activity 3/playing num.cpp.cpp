#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    int choice;
    char retry;
    do {
        cout << "Enter an integer to play with: ";
        cin >> num;
        if (cin.fail()) {
            cout << "Invalid Input, please insert only positive integer number." << endl;
           
        } else {
            cout << "Menu" << endl;
            cout << "1 to Print the reverse of the number." << endl;
            cout << "2 to Count the number of digits in the number." << endl;
            cout << "3 to Find the product of even digits in the number." << endl;
            cout << "4 to Print the first and last digit and their sum." << endl;
            cout << "5 to Swap the first and last digit of the number." << endl;
            cout << "6 to Check if the number is a palindrome." << endl;
            cout << "7 to Find the frequency of each digit in the number." << endl;
            cout << "8 to Check if the number is a Strong number." << endl;
            cout << "9 to Check if the number is a Perfect number." << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            if (cin.fail() || choice > 9 || choice < 1) {
                cout << "Please insert the correct choice number from the menu." << endl;
               
            } else {
                switch (choice) {
                    case 1: {
                        int reverse = 0, original = num;
                        while (original != 0) {
                            int digit = original % 10;
                            reverse = reverse * 10 + digit;
                            original /= 10;
                        }
                        cout << "The reversed integer is: " << reverse << endl;
                        break;
                    }
                    case 2: {
                        int original = num, count = 0;
                        if (original == 0) {
                            count = 1;
                        } else {
                            while (original != 0) {
                                original = original / 10;
                                count = count + 1;
                            }
                        }
                        cout << "Number of digits in your integer: " << count << endl;
                        break;
                    }
                    case 3: {
                        int product = 1;
                        int original = num;
                        while (original != 0) {
                            int digit = original % 10;
                            if (digit % 2 == 0) {
                                product *= digit;
                            }
                            original = original / 10;
                        }
                        cout << "The product of all even numbers in your integer is: " << product << endl;
                        break;
                    }
                    case 4: {
                        int lastdigit = num % 10;
                        int firtdigit = num;
                        while (firtdigit >= 10) {
                            firtdigit /= 10;
                        }
                        cout << "First digit of your number: " << firtdigit << endl;
                        cout << "Last digit of your number: " << lastdigit << endl;
                        cout << "Sum of the last and the first digit: " << firtdigit + lastdigit << endl;
                        break;
                    }
                    case 5: {
                        int original = num, count = 0;
                        if (original == 0) {
                            count = 1;
                        } else {
                            while (original != 0) {
                                original = original / 10;
                                count = count + 1;
                            }
                        }
                        int lastdigit = num % 10;
                        int firtdigit = num;
                        while (firtdigit >= 10) {
                            firtdigit /= 10;
                        }
                        int swapped = lastdigit * pow(10, count - 1) + num % (int) pow(10, count - 1);
                        swapped -= lastdigit;
                        swapped += firtdigit;
                        cout << "Swapped number: " << swapped << endl;
                        break;
                    }
                    case 6: {
                        int reverse = 0, original = num;
                        while (original != 0) {
                            int digit = original % 10;
                            reverse = reverse * 10 + digit;
                            original /= 10;
                        }
                        if (num == reverse) {
                            cout << "Is palindrome" << endl;
                        } else {
                            cout << "Is not palindrome" << endl;
                        }
                        break;
                    }
                    case 7: {
                        int original = num;
                        cout << "Digit      frequency" << endl;
                        for (int digit = 0; digit <= 10; digit++) {
                            int count = 0;
                            original = num;
                            while (original != 0) {
                                if (original % 10 == digit) {
                                    count++;
                                }
                                original /= 10;
                            }
                            if (count > 0) {
                                cout << "  " << digit << "           " << count << endl;
                            }
                        }
                        break;
                    }
                    case 8: {
                        unsigned long long int sum = 0;
                        unsigned long long int original = num;
                        while (original != 0) {
                            int digit = original % 10;
                            int factorial = 1;
                            for (int i = 0; i >= digit; i++) {
                                factorial *= i;
                            }
                            sum += factorial;
                            original /= 10;
                        }
                        if (sum == num) {
                            cout << num << "Is strong" << endl;
                        } else {
                            cout << num << "Is not strong" << endl;
                        }
                        break;
                    }
                    case 9: {
                        int sum = 0;
                        for (int i = 1; i <= num / 2; i++) {
                            if (num % i == 0) {
                                sum += i;
                            }
                        }
                        if (sum == num) {
                            cout << num << " Is Perfect" << endl;
                        } else {
                            cout << num << " Is Not perfect" << endl;
                        }
                        break;
                    }
                }

                cout << endl;
                cout << "Do you want to continue?(y/n): ";
        cin >> retry;
            }
        }
        
    } while (retry == 'y' || retry == 'Y');
    cout<< endl;

    return 0;
}
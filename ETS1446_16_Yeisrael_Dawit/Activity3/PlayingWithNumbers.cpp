#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    int choice;
    do {
        cout << "Welcome to Gaming with Numbers" << endl;
        cout << "Enter an integer: ";
        cin >> num;
        if (cin.fail()) {
            cout << "Invalid Input, please enter an integer number" << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        } else {
            cout << "Menu:" << endl;
            cout << "Enter 1 to Print the reverse of the number" << endl;
            cout << "Enter 2 to Count the number of digits in the number" << endl;
            cout << "Enter 3 to Find the product of even digits in the number" << endl;
            cout << "Enter 4 to Print the first and last digit and their sum" << endl;
            cout << "Enter 5 to Swap the first and last digit of the number" << endl;
            cout << "Enter 6 to Check if the number is a palindrome" << endl;
            cout << "Enter 7 to Find the frequency of each digit in the number" << endl;
            cout << "Enter 8 to Check if the number is a Strong number" << endl;
            cout << "Enter 9 to Check if the number is a Perfect number" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (cin.fail() || choice < 1 || choice > 9) {
                cout << "Invalid Input, please enter the correct choice from the menu" << endl;
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
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
                                original /= 10;
                                count++;
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
                            original /= 10;
                        }
                        cout << "The product of all even digits in your integer is: " << product << endl;
                        break;
                    }
                    case 4: {
                        int lastDigit = num % 10;
                        int firstDigit = num;
                        while (firstDigit >= 10) {
                            firstDigit /= 10;
                        }
                        cout << "First digit of your number: " << firstDigit << endl;
                        cout << "Last digit of your number: " << lastDigit << endl;
                        cout << "Sum of the first and last digit: " << firstDigit + lastDigit << endl;
                        break;
                    }
                    case 5: {
                        int original = num, count = 0;
                        if (original == 0) {
                            count = 1;
                        } else {
                            while (original != 0) {
                                original /= 10;
                                count++;
                            }
                        }
                        int lastDigit = num % 10;
                        int firstDigit = num;
                        while (firstDigit >= 10) {
                            firstDigit /= 10;
                        }
                        int swapped = lastDigit * pow(10, count - 1) + num % (int) pow(10, count - 1);
                        swapped -= lastDigit;
                        swapped += firstDigit;
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
                            cout << num << " is a palindrome" << endl;
                        } else {
                            cout << num << " is not a palindrome" << endl;
                        }
                        break;
                    }
                    case 7: {
                        int original = num;
                        cout << "Digit  frequency" << endl;
                        for (int digit = 0; digit <= 9; digit++) {
                            int count = 0;
                            original = num;
                            while (original != 0) {
                                if (original % 10 == digit) {
                                    count++;
                                }
                                original /= 10;
                            }
                            if (count > 0) {
                                cout << "   " << digit << "    " << count << endl;
                            }
                        }
                        break;
                    }
                    case 8: {
                        int sum = 0;
                        int original = num;
                        while (original != 0) {
                            int digit = original % 10;
                            int factorial = 1;
                            for (int i = 1; i <= digit; i++) {
                                factorial *= i;
                            }
                            sum += factorial;
                            original /= 10;
                        }
                        if (sum == num) {
                            cout << num << " is a Strong number" << endl;
                        } else {
                            cout << num << " is not a Strong number" << endl;
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
                            cout << num << " is a Perfect number" << endl;
                        } else {
                            cout << num << " is not a Perfect number" << endl;
                        }
                        break;
                    }
                    default: {
                        cout << "Invalid Choice" << endl;
                        break;
                    }
                }
            }
        }

        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

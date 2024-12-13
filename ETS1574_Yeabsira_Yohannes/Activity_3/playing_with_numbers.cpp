#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    int choice;
    
    while (true) {
      
        cout << "\nChoose an option from the menu:\n";
        cout << "1. Reverse the number\n";
        cout << "2. Count the number of digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. Print first and last digits and their sum\n";
        cout << "5. Swap first and last digits\n";
        cout << "6. Check if the number is a palindrome\n";
        cout << "7. Find the frequency of each digit\n";
        cout << "8. Check if the number is a Strong number\n";
        cout << "9. Check if the number is a Perfect number\n";
        cout << "10. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 10) {
            break;
        }

        cout << "Enter an integer: ";
        cin >> number;

        switch (choice) {
            case 1: {
                // Reverse the number
                int reverse = 0;
                int temp = number;
                while (temp != 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }
                cout << "Reversed number: " << reverse << endl;
                break;
            }

            case 2: {
                // Count the number of digits
                int count = 0;
                int temp = number;
                while (temp != 0) {
                    temp /= 10;
                    count++;
                }
                cout << "Number of digits: " << count << endl;
                break;
            }

            case 3: {
                // Product of even digits
                int product = 1;
                bool foundEven = false;
                int temp = number;
                while (temp != 0) {
                    int digit = temp % 10;
                    if (digit % 2 == 0) {
                        product *= digit;
                        foundEven = true;
                    }
                    temp /= 10;
                }
                if (foundEven) {
                    cout << "Product of even digits: " << product << endl;
                } else {
                    cout << "No even digits found." << endl;
                }
                break;
            }

            case 4: {
                // Print first and last digits and their sum
                int lastDigit = number % 10;
                int firstDigit = number;
                while (firstDigit >= 10) {
                    firstDigit /= 10;
                }
                cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << endl;
                cout << "Sum of first and last digits: " << firstDigit + lastDigit << endl;
                break;
            }

            case 5: {
                // Swap first and last digits
                int lastDigit = number % 10;
                int firstDigit = number;
                int numDigits = log10(number);  // Find number of digits - 1
                int firstDigitMultiplier = pow(10, numDigits);
                firstDigit = number / firstDigitMultiplier;

                // Remove the first and last digits and swap
                number = number % firstDigitMultiplier;  // Remove the first digit
                number = number - lastDigit;  // Remove the last digit
                number = lastDigit * firstDigitMultiplier + number / 10 * 10 + firstDigit;

                cout << "Number after swapping first and last digit: " << number << endl;
                break;
            }

            case 6: {
                // Check if the number is a palindrome
                int original = number, reversed = 0;
                int temp = number;
                while (temp != 0) {
                    reversed = reversed * 10 + temp % 10;
                    temp /= 10;
                }
                if (original == reversed) {
                    cout << number << " is a palindrome.\n";
                } else {
                    cout << number << " is not a palindrome.\n";
                }
                break;
            }

            case 7: {
                // Find the frequency of each digit
                map<int, int> digitCount;
                int temp = number;
                while (temp != 0) {
                    int digit = temp % 10;
                    digitCount[digit]++;
                    temp /= 10;
                }

                cout << "Digit frequencies:\n";
                cout << setw(5) << "Digit" << setw(10) << "Frequency" << endl;
                for (const auto &entry : digitCount) {
                    cout << setw(5) << entry.first << setw(10) << entry.second << endl;
                }
                break;
            }

            case 8: {
                // Check if the number is a Strong number
                int original = number, sum = 0;
                int temp = number;
                while (temp != 0) {
                    int digit = temp % 10;
                    int fact = 1;
                    for (int i = 1; i <= digit; i++) {
                        fact *= i;
                    }
                    sum += fact;
                    temp /= 10;
                }
                if (sum == original) {
                    cout << number << " is a Strong number.\n";
                } else {
                    cout << number << " is not a Strong number.\n";
                }
                break;
            }

            case 9: {
                // Check if the number is a Perfect number
                int sum = 0;
                for (int i = 1; i <= number / 2; i++) {
                    if (number % i == 0) {
                        sum += i;
                    }
                }
                if (sum == number) {
                    cout << number << " is a Perfect number.\n";
                } else {
                    cout << number << " is not a Perfect number.\n";
                }
                break;
            }

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int choice;
  
    do {
        cout << "Select a pattern to print:\n";
        cout << "1. Pattern 1\n";
        cout << "2. Pattern 2\n";
        cout << "3. Pattern 3\n";
        cout << "4. Pattern 4\n";
        cout << "5. Pattern 5\n";
        cout << "6. Pattern 6\n";
        cout << "7. Pattern 7\n";
        cout << "8. Pattern 8\n";
        cout << "9. Exit\n";

        cout << "Enter your choice (1-9): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Pattern 1 (Numbers decreasing from 5)
                for (int i = 1; i <= 5; i++) {
                    for (int j = 5 - i; j >= 1; j--) {
                        cout << "  ";
                    }
                    for (int k = 1; k <= i; k++) {
                        cout << 5 - k << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 2: {
                // Pattern 2 (Alphabet in increasing order)
                char character = 'A';
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= i; j++) {
                        char letter = character + j - 1;
                        cout << letter << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 3: {
                // Pattern 3 (Lowercase Alphabet in rows)
                char character = 'a';
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= 5; j++) {
                        char letter = character + j - 1;
                        cout << letter << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                // Pattern 4 (Hollow Square of Stars)
                char character = 'A';
                for (int i = 1; i <= 7; i++) {
                    for (int j = 1; j <= 8; j++) {
                        if (i == 1 || i == 7 || j == 1 || j == 8) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 5: {
                // Pattern 5 (Diagonal of Stars)
                for (int i = 6; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        if (i == 1 || i == 6 || j == 1 || i == j) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 6: {
                // Pattern 6 (Right-aligned triangle of stars)
                for (int i = 1; i <= 6; i++) {
                    for (int j = 6 - i; j >= 1; j--) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; k++) {
                        cout << " * ";
                    }
                    cout << endl;
                }
                break;
            }
            case 7: {
                // Pattern 7 (Left-aligned triangle of stars)
                for (int i = 6; i >= 1; i--) {
                    for (int k = 6 - i; k >= 1; k--) {
                        cout << " ";
                    }
                    for (int j = 1; j <= i; j++) {
                        cout << " *";
                    }
                    cout << endl;
                }
                break;
            }
            case 8: {
                // Pattern 8 (Hollow Right-angle triangle of stars)
                for (int i = 1; i <= 6; i++) {
                    for (int j = 6 - i; j >= 1; j--) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; k++) {
                        if (i == 6 || k == 1 || i == k)
                            cout << " *";
                        else
                            cout << "  ";
                    }
                    cout << endl;
                }
                break;
            }
            case 9: {
                // Exit the program
                cout << "Exiting program..." << endl;
                break;
            }
            default: {
                // Handle invalid input
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } while (choice != 9); 

    return 0;
}


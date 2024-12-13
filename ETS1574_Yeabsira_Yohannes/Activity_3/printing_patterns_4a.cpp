#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Select a pattern to print:" << endl;
        cout << "1. Pattern 1" << endl;
        cout << "2. Pattern 2" << endl;
        cout << "3. Pattern 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Pattern 1
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= 5; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            case 2:
                // Pattern 2
                char character = 'A';
                for (int i = 1; i <= 4; i++) {
                    for (int j = 1; j <= 6; j++) {
                        cout << character << " ";
                        character++;
                    }
                    cout << endl;
                }
                break;

            case 3:
                // Pattern 3
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
                break;
        }

    } while (choice != 4); 

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Part 1: Grid of numbers
    cout << "Enter the number of rows and columns for the number grid: ";
    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << j << "\t"; // Using tab for spacing
        }
        cout << endl;
    }
    
    cout << endl;

    // Part 2: Grid of alphabets
    char ch = 'A'; // Starting character
    cout << "Enter the number of rows and columns for the alphabet grid: ";
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (ch <= 'X') {
                cout << ch << " ";
                ch++;
            }
        }
        cout << endl;
    }

    cout << endl;

    // Part 3: Grid of uppercase letters
    cout << "Enter the number of rows and columns for the uppercase letter grid: ";
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (char ch = 'A'; ch < 'A' + cols; ch++) {
            cout << ch << "\t"; // Using tab for spacing
        }
        cout << endl;
    }

    cout << endl;

    // Part 4: Half pyramid of numbers
    int n;
    cout << "Enter the height of the half pyramid of numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Part 5: Half pyramid of uppercase letters
    cout << "Enter the height of the half pyramid of uppercase letters: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Part 6: Grid of lowercase letters
    cout << "Enter the number of rows and columns for the lowercase letter grid: ";
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (char ch = 'a'; ch < 'a' + cols; ch++) {
            cout << ch << "\t"; // Using tab for spacing
        }
        cout << endl;
    }

    cout << endl;

    // Part 7: Hollow rectangle
    cout << "Enter the number of rows and columns for the hollow rectangle: ";
    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Part 8: Full pyramid
    cout << "Enter the height of the full pyramid: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Part 9: Hollow full pyramid
    cout << "Enter the height of the hollow full pyramid: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1) || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Part 10: Inverted full pyramid
    cout << "Enter the height of the inverted full pyramid: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Part 11: Inverted half pyramid
    cout << "Enter the height of the inverted half pyramid: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Part 12: Inverted hollow half pyramid
    cout << "Enter the height of the inverted hollow half pyramid: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Part 1: 5x5 grid of numbers
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j << "\t"; // Using tab for spacing
        }
        cout << endl;
    }
    
    cout << endl;

    // Part 2: 4x6 grid of alphabets from A to X
    char ch = 'A'; // Starting character
    int rows = 4;  // Number of rows
    int cols = 6;  // Number of columns
    
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

    // Part 3: 5x5 grid of uppercase letters A to E
    for (int i = 0; i < 5; i++) {
        for (char ch = 'A'; ch <= 'E'; ch++) {
            cout << ch << "\t"; // Using tab for spacing
        }
        cout << endl;
    }

    cout << endl;

    // Part 4: Half pyramid of numbers
    int n = 6; // Pyramid height
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Part 5: Half pyramid of uppercase letters
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Part 6: 5x5 grid of lowercase letters a to e
    for (int i = 0; i < 5; i++) {
        for (char ch = 'a'; ch <= 'e'; ch++) {
            cout << ch << "\t"; // Using tab for spacing
        }
        cout << endl;
    }

    cout << endl;

    // Part 7: Hollow rectangle
    rows = 7;
    cols = 8;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print star at borders (first and last row, first and last column)
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Part 8: Full pyramid with height 6
    n = 6; // Pyramid height
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    cout << endl;

    // Part 9: Hollow full pyramid with height 6
    n = 6; // Pyramid height
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars and spaces for hollow effect
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1) || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Move to the next line
        cout << endl;
    }

    cout << endl;

    // Part 10: Inverted full pyramid with height 6
    n = 6; // Pyramid height
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    cout << endl;

    // Part 11: Inverted half pyramid with height 6
    n = 6; // Pyramid height
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Part 12: Inverted hollow half pyramid with height 6
    n = 6; // Pyramid height
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            // Print stars at the borders or for the last row
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

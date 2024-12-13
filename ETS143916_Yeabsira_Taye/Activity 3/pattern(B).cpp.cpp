#include <iostream>
using namespace std;

int main() {
    int patternchoice;
    int row;
    char Choice;
    cout << "     ---patterns show---" << endl;
    do {
        cout << "Menu" << endl;
    cout << "Enter 1 for grid of numbers" << endl;
    cout << "Enter 2 for grid of alphabets from A to X" << endl;
    cout << "Enter 3 for Left half pyramid of numbers" << endl;
    cout << "Enter 4 for Right half pyramid of numbers" << endl;
    cout << "Enter 5 for Half pyramid of uppercase letters" << endl;
    cout << "Enter 6 for grid of lowercase letters a to e" << endl;
    cout << "Enter 7 for Hollow rectangle" << endl;
    cout << "Enter 8 for Inverted half pyramid" << endl;
    cout << "Enter 9 for Hollow Inverted half pyramid" << endl;
    cout << "Enter 10 for Full pyramid" << endl;
    cout << "Enter 11 for Inverted full pyramid" << endl;
    cout << "Enter 12 for Hollow full pyramid" << endl;
    cout << "Choice: ";
    cin >> patternchoice;
    if (cin.fail() || patternchoice == 0 || patternchoice > 12) {
        cout << "Invalid Input, Please enter the correct choice from the menu" << endl;
    } else {
        cout << "Enter number of rows: ";
        cin >> row;
        switch (patternchoice) {
            case 1: {
                cout << "Grid of numbers" << endl;
                for (int i = 0; i < row; i++) {
                    for (int j = 1; j <= row; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 2: {
                cout << "Grid of alphabets from A to X" << endl;
                char alpha = 'A';
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < row; j++) {
                        if (alpha <= 'X') {
                            cout << alpha << " ";
                            alpha++;
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 3: {
                cout << "Left half pyramid of numbers" << endl;
                for (int i = 1; i <= row; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                cout << "Right half pyramid of numbers" << endl;
                for (int i = 1; i <= row; i++) {
                    for (int k = row - i; k > 0; k--) {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 5: {
                cout << "Half pyramid of uppercase letters" << endl;
                for (int i = 0; i < row; i++) {
                    for (char alpha = 'A'; alpha <= 'A' + i; alpha++) {
                        cout << alpha << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 6: {
                cout << "Grid of lowercase letters a to e" << endl;
                for (int i = 0; i < row; i++) {
                    for (char alpha = 'a'; alpha <= 'e'; alpha++) {
                        cout << alpha << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 7: {
                cout << "Hollow rectangle" << endl;
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < row; j++) {
                        if (i == 0 || i == row - 1 || j == 0 || j == row - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 8: {
                cout << "Inverted half pyramid" << endl;
                for (int i = row; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 9: {
                cout << "Hollow Inverted half pyramid" << endl;
                for (int i = row; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        if (j == 1 || j == i || i == row) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 10: {
                cout << "Full pyramid" << endl;
                for (int i = 1; i <= row; i++) {
                    for (int j = 1; j <= row - i; j++) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; k++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 11: {
                cout << "Inverted full pyramid" << endl;
                for (int i = row; i >= 1; i--) {
                    for (int j = 0; j < row - i; j++) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; k++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 12: {
                cout << "Hollow full pyramid" << endl;
                for (int i = 1; i <= row; i++) {
                    for (int j = 1; j <= row - i; j++) {
                        cout << " ";
                    }
                    for (int k = 1; k <= i; k++) {
                        if (k == 1 || k == i || i == row) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
        }
        cout << "Do you want to see other patterns?(y/n): ";
        cin>> Choice;
    }
    
    }while(Choice=='y'||Choice=='Y');
    cout << endl;
    return 0;
}
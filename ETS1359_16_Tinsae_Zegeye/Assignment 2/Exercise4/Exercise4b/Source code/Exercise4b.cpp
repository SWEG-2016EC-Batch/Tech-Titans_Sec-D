#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int ctrl;

    cout<<"Welcome to pattern printing. By pressing the number, select what kind of shape do you want to print out!"<<endl<<
    "PRESS:"<<endl<<
        "1. To print out rectangle shape with numbers"<<endl<<
        "2. To print out rectangle with alphabets"<<endl<<
        "3. To print out left aligned triangle with numbers"<<endl<<
        "4. To print out right aligned triangle with numbers"<<endl<<
        "5. To print out left aligned triangle with alphabets"<<endl<<
        "6. To print out rectangle with alphabets with the same type of rows"<<endl<<
        "7. To print out hollow rectangle"<<endl<<
        "8. To print out inverted left aligned triangle with stars"<<endl<<
        "9. To print out hollow inverted left aligned triangle"<<endl<<
        "10. To print out full pyramid with stars"<<endl<<
        "11. To print out inverted full pyramids with stars"<<endl<<
        "12. To print out hollow full pyramid"<<endl<<
        "0. To exit"<<endl;

    int attempts = 5; 
    bool isvalid = false;
    while (attempts > 0) {
        cout << "Please enter a valid value: ";
        cin >> ctrl;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000,'\n');
            attempts--;
            cout << "Invalid value. You have " << attempts << " attempt(s) left." << endl;
        } else {
            isvalid = true;
            break;
        } 
    }
    
    if (isvalid == false) {
        cout << "You entered wrong value many times. Try later!";
        return -1;
    }    
        
    switch(ctrl){

        case 0: 
            return 0;
            
        case 1: {
            int rows, cols;
            cout << "Enter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> cols;
            for (int i = 1; i <= rows; i++) {
                for(int j = 1; j <= cols; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        }

        case 2: {
            char alpha = 'A';   
            int rows, cols;
            cout << "Enter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> cols;
            for(int i = 1; i <= rows; i++) {
                for(int j = 1; j <= cols; j++) {
                    cout << alpha << " ";
                    alpha++;
                }
                cout << endl;
            }
            break;
        }
        
        case 3: {
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for(int i = 1; i <= rows; i++) {
                for(int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        }
        
        case 4: {
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for(int i = 1; i <= rows; i++) {
                for(int k = rows - i; k > 0; k--)
                    cout << "  ";
                for(int j = i; j >= 1; j--) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        }

        case 5: {
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for(int i = 1; i <= rows; i++) {
                char alpha = 'A';
                for(int j = 1; j <= i; j++) {
                    cout << alpha << " ";
                    alpha++;
                }
                cout << endl;
            }
            break;
        }

        case 6: {
            int rows, cols;
            cout << "Enter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> cols;
            for(int i = 1; i <= rows; i++) {
                char alpha = 'a';
                for(int j = 1; j <= cols; j++) {
                    cout << alpha << " ";
                    alpha++;
                }
                cout << endl;
            }
            break;
        }

        case 7: {
            int rows, cols;
            cout << "Enter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> cols;
            for(int i = 1; i <= rows; i++) {
                for(int j = 1; j <= cols; j++) {
                    if (i == 1 || i == rows || j == 1 || j == cols) {
                        cout << " * ";
                    } else {
                        cout << "   ";
                    }
                }
                cout << endl;
            }
            break;
        }

        case 8: {
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for(int i = rows; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << " * ";
                }
                cout << endl;
            }
            break;
        }

        case 9: {
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for(int i = rows; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    if(i == rows || i == 1 || j == 1 || j == i) {
                        cout << " * ";
                    } else {
                        cout << "   ";
                    }
                }
                cout << endl;
            }
            break;
        }

        case 10: {
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= rows - i; j++) {
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
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for (int i = rows; i >= 1; i--) {
                for (int j = 1; j <= rows - i; j++) {
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
            int rows;
            cout << "Enter the number of rows: ";
            cin >> rows;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= rows - i; j++) {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++) {
                    if (i == 1 || i == rows || k == 1 || k == i) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        }

        default:    
            cout << "You entered incorrect value!";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
   char Choice;
   cout<< "     ---patterns show---"<< endl;

    do {
        int patternchoice;
    cout << "        ***Menu***"<< endl;
    cout<<"Enter 1 to see 5x5 grid of numbers"<< endl;
    cout<<"Enter 2 to see 4x6 grid of alphabets from A to X"<< endl;
    cout<<"Enter 3 to see Left half pyramid of numbers"<< endl;
    cout<<"Enter 4 to see Right half pyramid of numbers"<< endl;
    cout<<"Enter 5 to see Half pyramid of uppercase letters"<< endl;
    cout<<"Enter 6 to see 5x5 grid of lowercase letters a to e"<< endl;
    cout<<"Enter 7 to see Hollow rectangle"<< endl;
    cout<<"Enter 8 to see Inverted half pyramid"<< endl;
    cout<<"Enter 9 to see Hollow Inverted half pyramid"<< endl;
    cout<<"Enter 10 to see Full pyramid"<< endl;
    cout<<"Enter 11 to see Inverted full pyramid"<< endl;
    cout<<"Enter 12 to see Hollow full pyramid"<< endl;
    cout << "Enter your choice: ";
    cin>> patternchoice;
    
    if (cin.fail()||patternchoice == 0|| patternchoice>12){
        cout<<"Invalid Input, please insert the correct choice from the menu."<< endl;
       
    }else{
        switch (patternchoice){
        case 1:{
            cout << "5x5 grid of numbers";
            for (int i=0; i <= 5; i++){
                for (int j=1; j<=5; j++){
                cout << j << " ";
                }
                 cout << endl;
            }
            break;
        }
        case 2: {
            cout << "4x6 grid of alphabets from A to X"<< endl;
            char alpha = 'A';
            for (int i=0; i<4; i++){
                for (int j=0; j<6; j++){
                    if(alpha<='X'){
                    cout<< alpha<< " ";
                    alpha++;
                    }
           
                }
                cout << endl;
            }
            break;
        }
        case 3: {
            cout << "Left half pyramid of numbers"<< endl;
            for (int i=1; i<=5; i++){
            for(int j=1; j<=i; j ++){
            cout <<j<< " ";
            }
            cout << endl;
        }
        break;
        }
        case 4: {
             cout << "Right half pyramid of numbers"<< endl;
             for (int i=1; i<=5; i++){
                 for (int k=5-i; k>0; k--){
                 cout<< "  ";
                 }
                 for(int j=i; j>=1; j --){
                 cout <<j<< " ";
                 }
                 cout << endl;
            }
            break;
        }
        case 5: {
             cout <<"Half pyramid of uppercase letters"<< endl;
             for(int i=0; i<5; i++){
                for(char alpha= 'A'; alpha <='A' + i; alpha++){
                cout << alpha<< " ";
                }
                cout << endl;
            }
            break;
        }
        case 6: {
            cout << "5x5 grid of lowercase letters a to e"<< endl;
            for (int i = 0; i < 5; i++){
                for (char alpha= 'a'; alpha <= 'e'; alpha++){
                cout << alpha<< " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
        case 7: {
            cout<< "Hollow rectangle"<< endl;
            for (int i=0; i< 7; i ++){
                for(int j=0; j<8; j++){
                if (i==0||i==6||j==0||j==7){
                cout << " *";
                }else {
                cout << "  ";
                }
            }
             cout<<endl;
            }
            break;
        }
        case 8: {
             cout << "Inverted half pyramid"<<endl;
             for (int i=6; i>=1; i--){
                 for(int j = 1; j<= i; j++){
                 cout<< "* ";
                }
            cout << endl;
            }
            cout << endl;
            break;
        }
        case 9: {
            cout << "Hollow Inverted half pyramid"<<endl;
            for (int i = 6; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
           
                   if (j == 1 || j == i || i == 6) {
                   cout << "* ";
                   } else {
                   cout << "  ";
                   }
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
        case 10: {
            cout <<"Full pyramid"<< endl;
            for(int i=1; i <=6; i++){
               for(int j=1; j<=6-i; j++){
               cout << " ";
              }for (int k=1; k<=i; k++){
               cout << "* ";
              }
            cout << endl;
            }
            break;
        }
        case 11: {
           cout << "Inverted full pyramid"<< endl;
           for (int i=6; i >=1; i--){
                 for (int j=0; j<6-i; j++){
                 cout << " ";
                }for (int k=1; k <= i; k++){
                cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 12: {
             cout << "Hollow full pyramid"<< endl;
             for(int i=1; i <=6; i++){
                for(int j=1; j<=6-i; j++){
                cout << " ";
                }for (int k=1; k<=i; k++){
                    if(k==1||k==i||i==6){
                    cout << "* ";
                    }else{
                         cout<< "  ";
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
    
    cout << "Thank you for exploring the patterns. Have a great day!";
    return 0;
}

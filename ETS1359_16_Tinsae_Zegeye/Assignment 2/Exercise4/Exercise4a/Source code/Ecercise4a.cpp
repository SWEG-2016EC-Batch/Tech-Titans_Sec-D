#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int ctrl;

    cout<<"Welcom to pattern printing.By pressing the number, select what kind of shape do you want to print out!"<<endl<<
    " PRESS:"<<endl<<
        "1.To print out rectangle shape with numbers "<<endl<<
        "2.To print out rectangle with alphabets"<<endl<<
        "3.To print out left alligned triangle with numbers"<<endl<<
        "4.To print out right alligned triangle with numbers"<<endl<<
        "5.To print out left alligned triangle with alphabets"<<endl<<
        "6.To print out rectangle with alphabets with the same type of rows"<<endl<<
        "7.To print out hollow rectangle"<<endl<<
        "8.To print out inverted left alligned triangle with stars"<<endl<<
        "9.To print out hollow inverted left alligned triangle"<<endl<<
        "10.To print out full pyramid with stars"<<endl<<
        "11.To print out inverted full pyramids with stars"<<endl<<
        "12.To print out hollow full pyramid"<<endl<<
        "0.To exit"<<endl;

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
        }else{
            isvalid = true;
            break;
        } 
}
if (isvalid==false){
    cout<<"You Entered wrong value many times. Try later!";
    return -1;
}    
        switch(ctrl){

            case 0: 

                return 0 ;

                break;

            case 1: 

                for (int i = 1; i <= 5; i++){
                    for(int j = 1; j <= 5; j++){
                        cout<<j<<" ";
                    }
                    cout<<endl;
                    }
                
                break;

            case 2:

                {char alpha = 'A';   
                    for(int i = 1; i<= 4; i++){
                        for(int j = 1; j <= 6; j++){
                            cout<<alpha<<" ";
                            alpha++;
                        }
                        cout<<endl;
                    }
                }

                break;
            
            case 3: 

                for(int i = 1; i <= 5; i++){
                    for(int j = 1; j <= i; j++){
                        cout<<j<<" ";
                    }
                    cout<<endl;
                }

                break;
            
            case 4:

                for(int i = 1; i <= 5; i++){
                    for(int k= 5 - i; k > 0; k--)
                        cout<<"  ";
            
                    for(int j = i; j >= 1; j--){
                        cout<<j<<" ";
            
                    }
                    cout<<endl;    
                }
                break;

            case 5: 

                for(int i = 1; i <= 5; i++){
                    char alpha = 'A';
                    for(int j = 1; j <= i; j++){
                        cout<<alpha<<" ";
                        alpha++;
                    }
                    cout<<endl;
                }

                break;

            case 6:
            
                for(int i = 1; i <= 5; i++){
                    char alpha = 'a';
                    for(int j = 1; j <= 5; j++){
                        cout<<alpha<<" ";
                        alpha++;
                    }
                    cout<<endl;
                }

                break;

            case 7: 

                for(int i = 1; i <= 7; i++){
                    for(int j = 1; j <= 8; j++){
                        if (i==1 || i==7 || j==1 || j==8){
                            cout <<" * ";
                        }else{
                            cout<<"   ";
                        }
                    }
                    cout<<endl;
                }

                break;

            case 8: 

                for(int i = 6; i >= 1; i--){
                    for (int j = 1; j <= i; j++){
                        cout <<" * ";
                    }
                    cout<<endl;
                }

                break;

            case 9:

                for(int i = 6; i >= 1; i--){
                    for (int j = 1; j <= i; j++){
                        if(i == 6 || i == 1 || j == 1 || j == i){
                            cout<<" * ";
                        }else{
                            cout<<"   ";
                        }
                    }
                    cout<<endl;
                }

                break;

            case 10:

                for (int i = 1; i <= 6; i++) {
        
                    for (int j = 1; j <= 6 - i; j++) {
                        cout << " ";
                    }

                        for (int k = 1; k <= i; k++) {
                            cout << "* ";
                        }

                    cout<< endl;
                }

                break;

            case 11:

                for (int i = 6; i >= 1; i--) {
                    for (int j = 1; j <= 6 - i; j++) {
                        cout << " ";
                    }
                        for (int k = 1; k <= i; k++) {
                            cout << "* ";
                        }

                    cout << endl;
                }

                break;

            case 12: 

                for (int i = 1; i <= 6; i++) {
        
                    for (int j = 1; j <= 6 - i; j++) {
                        cout << " ";
                    }

                    for (int k = 1; k <= i; k++) {
                        if (i == 1 || i == 6 || k == 1 || k == i){
                            cout<<"* ";
                        }else{
                            cout<<"  ";
                        }
                    }

                    cout << endl;
                }

                break;

                default :    
                    cout<<"You entered incorrect value!";

        }
return 0;
}

    
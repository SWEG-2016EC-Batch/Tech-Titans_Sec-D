#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int ctrl, num, reverse = 0,i = 0,product = 1,first_digit, last_digit, sum, reminder;
    

    cout<<"Welcome to the number play game.\n"<<"by pressing the numbers from 1 - 9 select what kind of game do you to play with numbers.\n";
    cout<< "PRESS: "<<endl<<
        "1. To print the reverse of the number"<<endl<<
        "2. To count the number of digits in the number "<<endl<<
        "3. To find the product of even digits in a given number "<<endl<<
        "4. To print the first and the last digits of a given number and find their sum "<<endl<<
        "5. To swap the fist and the last digits of a given number "<<endl<<
        "6. To check if the number is palindrome or not "<<endl<<
        "7. To find the frequency of digits in a given number "<<endl<<
        "8. To check if the number is strong or not "<<endl<<
        "9. to check if the number is perfect or not"<<endl<<
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
        }else{
            isvalid = true;
            break;
        } 
}
if (isvalid==false){
    cout<<"You Entered wrong value many times. Try later!";
    return -1;
}       

        switch (ctrl){

                case 0: 
                        return 0 ;

                        break;

                case 1:
                            cout<<"Enter a number: ";
                            cin>>num;

                        while (num > 0) {
            
                            int reminder = num % 10;
                            reverse = reverse *10 + reminder;
                            num/=10;
                        }
                    cout<<"The reverse of the number is: "<<reverse;
                        break;

                case 2: 
                
                            cout<<"Enter a number: ";
                                cin>>num;

                        while (num > 0) {
            
                           int reminder = num % 10;
                            num/=10;
                            i++;
                            }
        
                    cout<<"The number of digits is: "<<i;
                        break;

                case 3:
                
                        cout<<"Enter a number: ";
                        cin>>num;

                    while (num > 0) {
            
                    int reminder = num % 10;
                        if (reminder % 2 == 0){
                            product *=reminder;
                        }
                            num/=10;
                    }
        
                cout<<"The product of even digits is: "<<product;
                        break;
                
                case 4:

                        cout << "Enter the number: ";
                        cin >> num;
    
                    if (num >= 0 && num <= 9) {

                        first_digit = num;
                        last_digit = 0;

                   } else {

                        last_digit = num %10;
                        first_digit = num;
                        
                        while (first_digit >= 10) {
                            first_digit /= 10; 
                        }
                    }

                    sum = first_digit + last_digit; 

                cout<<"The first digit of a number is: "<<first_digit<<endl;
                cout<<"The last digit of a number is: "<<last_digit<<endl;
                cout <<"The sum of the first and last digits of the number is: " << sum;
                        break;

                case 5:

                    cout << "Enter the number: ";
                    cin >> num;
    
                        if (num >= 0 && num <= 9) {

                                cout <<  "You entered a one digit number:"<<num<<endl;

                         } else {

                                last_digit = num %10;
                                first_digit = num;
                                    while (first_digit >= 10) {
                                        first_digit /= 10; 
                                    }
                                 first_digit = first_digit + last_digit;
                                 last_digit = first_digit - last_digit;
                                 first_digit = first_digit - last_digit;

                                cout << "After swaping"<<endl<<
                                    "The first digit is: "<<first_digit<<endl<<
                                    "The last digit is: "<<last_digit;
                         }
                        break;

                case 6: 

                    cout<<"Enter a number: ";
                    cin>>num;
                     { int temp = num;
                       
                        while (num > 0) {
            
                            reminder = num % 10;
                            reverse = reverse *10 + reminder;
                            num/=10;
                        }
                    if (temp == reverse){
                        cout<<"The number is palindrome!";
                     }else {
                        cout<<"The number not palindrome!";
                    }
                }
                
                        break;

                case 7:
                    
                        {
                        long long num ;
                        int digit;
                        int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;
                        
                        cout<<"Enter a number:";
                        cin>>num;

                    
                    while (num > 0) {
                        digit = num % 10;  
                        num /= 10; 

        
                        if (digit == 0){
                            freq0++;
                        }else if(digit == 1) {
                            freq1++;
                            
                        }else if (digit == 2) {
                            freq2++;
                            
                        }else if (digit == 3) {
                            freq3++;
                            
                        }else if (digit == 4) {
                            freq4++;
                            
                        }else if (digit == 5) {
                            freq5++;
                            
                        }else if (digit == 6) {
                            freq6++;
                            
                        }else if (digit == 7) {
                            freq7++;
                            
                        }else if (digit == 8) {
                            freq8++;
                            
                        } else if (digit == 9) {
                            freq9++;
                    } 
                }
                            
                cout << left<<setw(10)<<"Digit"<<setw(10)<<"Frequency" << endl;
                cout << "----------------" << endl;
                    if (freq0 > 0) {cout <<left<<setw(10)<< "0"<<setw(10)<< freq0 << endl;}

                    if (freq1 > 0) {cout <<left<<setw(10)<< "1"<<setw(10)<< freq1 << endl;}
                    if (freq2 > 0) {cout <<left<<setw(10)<< "2"<<setw(10)<< freq2 << endl;}
                    if (freq3 > 0) {cout <<left<<setw(10)<< "3"<<setw(10)<< freq3 << endl;}
                    if (freq4 > 0) {cout <<left<<setw(10)<< "4"<<setw(10)<< freq4 << endl;}
                    if (freq5 > 0) {cout <<left<<setw(10)<< "5"<<setw(10)<< freq5 << endl;}
                    if (freq6 > 0) {cout <<left<<setw(10)<< "6"<<setw(10)<< freq6 << endl;}
                    if (freq7 > 0) {cout <<left<<setw(10)<< "7"<<setw(10)<< freq7 << endl;}
                    if (freq8 > 0) {cout <<left<<setw(10)<< "8"<<setw(10)<< freq8 << endl;}
                    if (freq9 > 0) {cout <<left<<setw(10)<< "9"<<setw(10)<< freq9 << endl;}
                
            }
                        break;

                case 8: 

                    cout <<"Enter a number: ";
                    cin>>num;
                    {int temp = num;
                    sum = 0;

                        if (num == 0){
                            cout<<"The number is not strong number!";
                        }else{
            
                        while(num > 0){
                            int digit = num % 10;
                               int product =1;
                                    for (int i = digit; i >=1; i-- ){
                                            product *= i;
                                    }
                                sum +=product;
                                num /=10;
                        }
   
                        if (temp ==sum){
                            cout<<"The number is strong number!";
                        }else{
                            cout<<"The number is not strong number!";
                        }
                    } 
                }
                        break;

                case 9:

                    cout<<"Enter a number: ";
                    cin>>num;
                    {int temp = num;

                        for (int i = 1; i<=num/2; i++){

                            if (num %i ==0){
                                    sum+=i;
                            }
                        }
                    if (sum == temp){

                        cout<<"The number is perfect number!";

                    }else{

                        cout<<"The number is not perfect number!";
                    }
                }
                        break;  
                        
                default :    
                    cout<<"You entered incorrect value!";
            }
    return 0;
}            
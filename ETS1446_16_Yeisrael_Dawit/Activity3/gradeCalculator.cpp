#include <iostream>
using namespace std;
int main () {
    float test, quiz, project, assignment, final;
    //Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%
    cout << "Enter your test result out of 15%: ";
    cin >> test;
    cout << "Enter your quiz result out of 5%: ";
    cin >> quiz;
    cout << "Enter your Project result out of 20%: ";
    cin >> project;
    cout << "Enter your Assignment result out of 10%: ";
    cin >> assignment;
    cout << "Enter your final exam result out of 50%: ";
    cin >> final;
    
    float totalMark = test+quiz+project+assignment+final;
    if (totalMark >= 90) {
        cout << "You got A+, Good job!";
    }else if (totalMark >= 80) {
        cout << "You got A. Nice!";
    }else if (totalMark >= 75){
        cout << "You got B+. Good";
    }else if (totalMark >= 60){
        cout << "You got B.";
    }else if (totalMark >= 55){
        cout << "You got C+.";
    }else if (totalMark >= 45){
        cout << "You got C.";
    }else if (totalMark >= 30) {
        cout << "You got D.";
    }else {
        
        cout << "You got F.";
    }
    
return 0;
}
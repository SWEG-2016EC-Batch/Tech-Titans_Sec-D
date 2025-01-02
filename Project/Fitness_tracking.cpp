#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
int main() { 
    cout << string(60, '=') << "\n"; 
    cout << "       Welcome to the Runner's Performance Tracker\n"; 
    cout << string(60, '=') << "\n"; 
    cout << "This program helps instructors and runners track\n"; 
    cout << "daily running mileage and calculate weekly status.\n"; 
    cout << "Let's get started!\n\n"; 
 
    char cont; 
    int numRunners = 0; 
    string runners[15]; // Assuming a maximum of 15 runners 
    double miles[15][7]; 
    double totalmiles[15] = {0}; 
    double averagemiles[15] = {0}; 
    string code[15]; 
    int i, j; 
 
    do { 
        int choice; 
        cout << "\nMenu:" << endl; 
        cout << "1. Join as instructor" << endl; 
        cout << "2. Join as runner" << endl; 
        cout << "3. Search runner history" << endl; 
        cout << "4. Exit" << endl; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        cin.ignore(); // Clear the buffer before reading any further input 
 
        switch (choice) { 
            case 1: { 
                int attempt = 5; 
                bool isvalid = false; 
                int initialNumRunners = numRunners; 
 
                while (attempt > 0) { 
                    cout << "Enter the number of runners: "; 
                    int additionalRunners; 
                    cin >> additionalRunners; 
 
                    if (cin.fail() || additionalRunners <= 0) { 
                        cin.clear(); 
                        cin.ignore(1000, '\n'); 
                        cout << "You entered a wrong value! Please enter a positive number." << endl; 
                        cout << "You are left with " << attempt << " chances!" << endl; 
                        attempt--; 
                    } else { 
                        numRunners += additionalRunners; 
                        isvalid = true; 
                        break; 
                    } 
                }

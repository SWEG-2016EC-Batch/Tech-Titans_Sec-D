// Required libraries for input-output operations and formatting
#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
int main() { 
    cout << string(60, '=') << "\n"; // Decorative line separator for the welcome message
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
    int i, j; // Loop counters
 
    do { 
        int choice; 
        cout << "\n     ---Menu---  " << endl; 
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
                
                if (!isvalid) {
                    cout << "You entered wrong values too many times. Try again later!" << endl;
                    break;
                }

                for (i = initialNumRunners; i < numRunners; i++) {
                    cin.ignore(); // Clear the buffer before reading new input

                    cout << "Enter full name of runner " << i + 1 << ": ";
                    getline(cin, runners[i]);

                    cout << "Set a unique code for " << runners[i] << ": ";
                    getline(cin, code[i]);

                    cout << "Enter the miles run by " << runners[i] << " for each day of the week (7 days):" << endl;
                    totalmiles[i] = 0;

                    for (j = 0; j < 7; j++) {
                        attempt = 5;
                        isvalid = false;

                        while (attempt > 0) {
                            cout << "Day " << j + 1 << ": ";
                            cin >> miles[i][j];

                            if (cin.fail() || miles[i][j] < 0) {
                                cin.clear();
                                cin.ignore(1000, '\n');

                                cout << "Invalid input! Please enter a non-negative value." << endl;
                                cout << "Remaining attempt " << attempt << endl;

                                attempt--;
                            } else {
                                isvalid = true;
                                break;
                           
                }
                         
                        }

                        if (!isvalid) {
                            cout << "You entered wrong values too many times. Try again later!" << endl;
                            return -1;
                        }

                        totalmiles[i] += miles[i][j];
                    }
                    averagemiles[i] = totalmiles[i] / 7;
                }

                // Display runner details and performance by Tabulated format for better clarity
                cout << left << setw(20) << "Name"
                     << setw(10) << "Code";
                for (int i = 0; i < 7; i++) {
                    cout << right<<setw(9) << "Day " << i + 1;
                }
                cout << right << setw(17) << "Total Miles"
                     << setw(17) << "Average Miles" << endl;
                cout << string(140, '-') << endl;

                for (i = 0; i < numRunners; i++) {
                    cout << left << setw(20) << runners[i]
                         << setw(10) << code[i];
                    for (int j = 0; j < 7; j++) {
                        cout << right<<setw(10) << miles[i][j];
                    }
                    cout << right<<setw(15) << totalmiles[i]
                         << setw(17) << averagemiles[i] << endl;
                }

                // performance feedback section for each runner
                for (int i = 0; i < numRunners; i++) {
                    cout << "\nPerformance feedback for " << runners[i] << ": ";

                    if (averagemiles[i] >= 10) {
                        cout << "Excellent! Keep it up!";
                    } else if (averagemiles[i] >= 5) {
                        cout << "Good progress. Aim for 10+ miles!";
                    } else {
                        cout << "Needs improvement. Try to be more consistent.";
                    }
                    cout << endl;
                }

                break;
            }
         case 2: {
                if (numRunners >= 15) {
                    cout << "Runner limit reached. Cannot add more runners." << endl;
                    break;
                }

                string runner;
                string runnerCode;
                double runnerMiles[7];
                double runnerTotalMiles = 0;
                double runnerAverageMiles;
                int attempt = 5;
                bool isvalid = false;

                cout << "Enter your full name: ";
                getline(cin, runner);

                cout << "Set your code: ";
                getline(cin, runnerCode);

                cout << "Enter the miles you run for each day of the week (7 days):" << endl;
                for (j = 0; j < 7; j++) {
                    attempt = 5;
                    isvalid = false;

                    while (attempt > 0) {
                        cout << "Day " << j + 1 << ": ";
                        cin >> runnerMiles[j];

                        if (cin.fail() || runnerMiles[j] < 0) {
                            cin.clear();
                            cin.ignore(1000, '\n');
                            cout << "Invalid input! Please enter a non-negative value." << endl;
                            cout << "You are left with " << attempt << " chances!" << endl;
                            attempt--;
                        } else {
                            isvalid = true;
                            break;
                        }
                    }

                    if (!isvalid) {
                        cout << "You entered wrong values too many times. Try again later!" << endl;
                        return -1;
                    }

                    runnerTotalMiles += runnerMiles[j];
                }
                runnerAverageMiles = runnerTotalMiles / 7;

                runners[numRunners] = runner;
                code[numRunners] = runnerCode;

                for (j = 0; j < 7; j++) {
                    miles[numRunners][j] = runnerMiles[j];
                }

                totalmiles[numRunners] = runnerTotalMiles;
                averagemiles[numRunners] = runnerAverageMiles;
                numRunners++;

                cout << "Runner: " << runner << ", Code: " << runnerCode << endl;
                cout << "Total miles: " << runnerTotalMiles << ", Average miles per day: " << runnerAverageMiles << endl;
                cout << "\nPerformance feedback for " << runner << ": ";

                    if (runnerAverageMiles >= 10) {
                        cout << "Excellent! Keep it up!";
                    } else if (runnerAverageMiles >= 5) {
                        cout << "Good progress. Aim for 10+ miles!";
                    } else {
                        cout << "Needs improvement. Try to be more consistent.";
                    }
                    cout << endl;

                break;
            }

                   case 3: {
                if (numRunners == 0) {
                    cout << "No runners available to search. Please add runners first." << endl;
                    break;
                }

                string inputName, inputCode;
                cout << "\nEnter the name and code of the runner to view their history:" << endl;
                cout << "Name: ";
                getline(cin, inputName);

                cout << "Code: ";
                getline(cin, inputCode);

                bool found = false;
                for (i = 0; i < numRunners; i++) {
                    if (runners[i] == inputName && code[i] == inputCode) {
                        found = true;
                        cout << "History of " << runners[i] << " (Code: " << code[i] << "):" << endl;
                        for (j = 0; j < 7; j++) {
                            cout << "Day " << j + 1 << ": " << miles[i][j] << " miles" << endl;
                        }
                        cout << "Total Miles: " << totalmiles[i] << endl;
                        cout << "Average Miles: " << averagemiles[i] << endl;
                        break;
                    }
                }

                if (!found) {
                    cout << "Runner not found. Please check the name and code." << endl;
                }

                break;
            }

            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        // Prompt user to continue
        cout << "Do you want to continue? (y/n): "; // This line prompts the user to decide whether to continue using the program.
        cin >> cont; 
        cin.ignore(); // Clear the buffer before restarting the loop
    
    } while (cont == 'y' || cont == 'Y');

    // Closing Message Block
    cout << "\n" << string(60, '=') << "\n"; // Decorative line separator
    cout << "Thank you for using the Runner's Performance Tracker!" << endl; 
    cout << "Stay consistent and keep pushing your limits." << endl; 
    cout << "Best of luck with your training! See you next time!" << endl; 
    cout << string(60, '=') << "\n"; 

    cout << "Exiting! Goodbye!" << endl; // Final goodbye message

    return 0;
}


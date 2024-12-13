#include <iostream>

using namespace std;

int main() {
    double test, quiz, assignment, project, finalExam, totalMark;
    char grade;

    cout << "Enter the test mark(15): ";
    cin >> test;
    cout << "Enter the quiz mark(5): ";
    cin >> quiz;
    cout << "Enter the assignment mark(10): ";
    cin >> assignment;
    cout << "Enter the project mark(20): ";
    cin >> project;
    cout << "Enter the final exam mark(50): ";
    cin >> finalExam;

    totalMark = test + quiz + assignment + project + finalExam;

    if (totalMark >= 90) {
        grade = 'A';
        cout << totalMark <<endl<<"Grade: A+" << endl;
    } else if (totalMark >= 80) {
        grade = 'A';
        cout << totalMark <<endl<< "Grade: A" << endl;
    } else if (totalMark >= 75) {
        cout << totalMark <<endl<< "Grade: B+" << endl;
    } else if (totalMark >= 60) {
        grade = 'B';
        cout << totalMark <<endl<<"Grade: B" << endl;
    } else if (totalMark >= 55) {
        grade = 'C';
        cout << totalMark <<endl<< "Grade: C+" << endl;
    } else if (totalMark >= 45) {
        grade = 'C';
        cout << totalMark <<endl<< "Grade: C" << endl;
    } else if (totalMark >= 30) {
        grade = 'D';
        cout << totalMark <<endl<< "Grade: D" << endl;
    } else {
        grade = 'F';
        cout << totalMark <<endl<<"Grade: F" << endl;
    }

    return 0;
}

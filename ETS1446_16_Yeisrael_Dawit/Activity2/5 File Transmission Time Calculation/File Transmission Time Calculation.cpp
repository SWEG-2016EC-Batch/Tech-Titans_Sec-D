#include <iostream>
using namespace std;

int main() {
    const double transmissionRate = 960.0; // characters per second
    double fileSize; // bytes
    
    cout << "Enter the file size in bytes: ";
    cin >> fileSize;
    
    double timeInSeconds = fileSize / transmissionRate;

    int days = timeInSeconds / (24 * 3600);
    timeInSeconds -= days * 24 * 3600; // Remove days from total seconds

    int hours = timeInSeconds / 3600;
    timeInSeconds -= hours * 3600; // Remove hours from total seconds

    int minutes = timeInSeconds / 60;
    timeInSeconds -= minutes * 60; // Remove minutes from total seconds

    int seconds = timeInSeconds; // Remaining seconds

    cout << "Time to transmit a file of size " << fileSize << " bytes:" << endl;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    
    cout << "Transmission complete! Thanks for using the File Transmission Calculator." << endl;
    return 0;
}

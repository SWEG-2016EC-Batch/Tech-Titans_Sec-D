#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants
    const int transmissionRate = 960; // Characters per second
    const int bytesPerCharacter = 1; // Assuming 1 byte per character

    // File size in bytes 
    long long fileSizeBytes;
    cout << "Enter the file size: ";
    cin >> fileSizeBytes;

    // Calculate the total transmission time in seconds
    long long totalCharacters = fileSizeBytes / bytesPerCharacter;
    long long totalSeconds = totalCharacters / transmissionRate;

    // Convert total seconds into days, hours, minutes, and seconds
    int days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    // Display the results
    cout << "File size: " << fileSizeBytes << " bytes";
    cout << "Transmission rate: " << transmissionRate << " characters per second" << endl;
    cout << "Time required to transmit the file: ";
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, and "
         << seconds << " seconds." << endl;

    return 0;
}
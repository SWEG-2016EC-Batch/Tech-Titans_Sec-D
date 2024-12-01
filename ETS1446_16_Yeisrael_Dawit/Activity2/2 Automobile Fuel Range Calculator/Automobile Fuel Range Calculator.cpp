#include <iostream>
using namespace std;

int main() {
    float tankCapacity, milesPerGallon;
    
    cout << "Enter the tank capacity in gallons: ";
    cin >> tankCapacity;
    cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;
    
    float range = tankCapacity * milesPerGallon;
    cout << "The automobile can be driven " << range << " miles without refueling." << endl;
    cout << "Drive safely and enjoy your journey!" << endl;
    
    return 0;
}



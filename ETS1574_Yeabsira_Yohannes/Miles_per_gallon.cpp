#include <iostream>
using namespace std;
int main() {
  
 float gallon_capacity, milesPerGallon, distance;
 cout << "capacity in gallons of an autombile: ";
 cin >> gallon_capacity;
  
 cout << "how many miles an autombile can travel per gallon of gas: ";
 cin >> milesPerGallon;
  
 distance = gallon_capacity * milesPerGallon;
 cout << "The car can travel " << distance << " miles without refueling." << endl;

    return 0;
}

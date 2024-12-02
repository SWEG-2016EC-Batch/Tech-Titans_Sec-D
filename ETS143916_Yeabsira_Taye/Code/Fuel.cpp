#include<iostream>
using namespace std;

int main(){

    float fuelcapacity, milespergallon, totalmiles;
         
         cout<<"What is the fuel capacity of the automobile in gallon(gal): ";
         cin>>fuelcapacity;
         cout<<"Enter miles per gallon(mil/gal) of the automobile that it can be driven on: ";
         cin>>milespergallon;

         totalmiles = fuelcapacity * milespergallon;

         cout<<"The automobile can be driven for "<<totalmiles<<" miles without refueling.";

   return 0;    
}
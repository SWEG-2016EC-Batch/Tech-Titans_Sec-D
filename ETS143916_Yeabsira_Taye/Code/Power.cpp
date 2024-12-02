#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x,y;

    cout<<"Enter a number(base): ";
    cin>>x;
    cout<<"Enter it's exponent(power): ";
    cin>>y;

    cout<< x<<" The power of "<<y<< " is: "<<pow (x,y);

    return 0;
}
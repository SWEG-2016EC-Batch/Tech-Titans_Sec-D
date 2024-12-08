#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    int counter;
    cout<<"enter number of people to calculate their bmi:";
    cin>>counter;

    for(int i=1; i<=counter; i++){
    cout<<"enter the weight in kg for person:"<< i <<":";
    cin>>weight;

    cout<<"enter the height in meter for person:"<< i <<":";
    cin>>height;

    bmi=weight/(height*height);
    cout<< "your bmi is:"<<bmi<<endl;

    if(bmi<18.5) {
        cout<<"underweight";

    } else if(bmi>=18.5 && bmi<24.9) {
        cout<<"normal weight";

    } else if(bmi>=25 && bmi<29.9) {
        cout<<"overweight";

    } else {
        cout<<"obesity";
    }
    }
    return 0;

}

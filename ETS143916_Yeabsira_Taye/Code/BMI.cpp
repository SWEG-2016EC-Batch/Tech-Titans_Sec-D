#include<iostream>
using namespace std;
int main(){

    int num;
    float height, weight, BMI;

    cout<<"Enter number of person you want to calculate: ";
    cin>>num;

        for (int i =1; i<=num; i++){
            cout <<"Enter the weight of a person(kg): ";
            cin>>weight;
            cout<<"Enter the height of a person(m): ";
            cin>>height;
            
            BMI = weight/(height*height);

                if (BMI >= 18.5 && BMI <= 24.9){
                    cout<<"Your body mass index(BMI)is: "<<BMI<<endl;
                    cout<<"Congratulations!!"<<endl;
                    cout<<"Your body weight is normal person."<<endl;
                }else if (BMI >= 25){
                    cout<<"Your body mass index(BMI)is: "<<BMI <<endl;
                    cout<<"You are overweight."<<endl;
                }else{
                    cout <<"Your body mass index(BMI)is: "<<BMI<<endl;
                    cout<<"You are under weighted."<<endl;
                }
                
        }
     return 0;   


}
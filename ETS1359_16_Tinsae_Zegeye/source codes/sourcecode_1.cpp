#include<iostream>
using namespace std;
int main(){

    int num;
    float height, weight, BMI;

    cout<<"Enter number of person you to calculate: ";
    cin>>num;

        for (int i =1; i<=num; i++){
            cout <<"Enter weight of a person(kg): ";
            cin>>weight;
            cout<<"Enter the height of a person(m): ";
            cin>>height;
            
            BMI = weight/(height*height);

                if (BMI >= 18.5 && BMI <= 24.9){
                    cout<<"you body mass index(BMI)is: "<<BMI<<endl;
                    cout<<"congratulations!!"<<endl;
                    cout<<"you are a normal person."<<endl;
                }else if (BMI >= 25){
                    cout<<"your body mass index(BMI)is: "<<BMI <<endl;
                    cout<<"Oops!!"<<endl;
                    cout<<"you are overwighted."<<endl;
                }else{
                    cout <<"your body mass index(BMI)is: "<<BMI<<endl;
                    cout<<"you are under weighted."<<endl;
                }
                
        }
     return 0;   


}
#include <iostream>
using namespace std;
int main(){
    int basic_salary,worked_hours, bonus_rate, extra_hour;
    double gross_salary,pension,tax,net_salary , bonus =0,tax_rate;

    cout<<"Enter your basic salary : ";
    cin>>basic_salary;
    cout<<"Enter your worked_hour : ";
    cin>>worked_hours;
    
    if(worked_hours > 40){
        cout<<"Enter your over-time bonus rate/hour: ";
        cin>>bonus_rate;
        extra_hour = worked_hours - 40;
       
        bonus = extra_hour * bonus_rate;
        gross_salary = basic_salary +bonus;

    }
    if(gross_salary<=200){
        tax_rate = 0;
    }
    else if(gross_salary<=600){
        tax_rate = 0.1;
    }
    else if(gross_salary<=1200){
        tax_rate = 0.15;
    }
    else if(gross_salary<=2000){
        tax_rate = 0.20;
    }
    else if(gross_salary<=3500){
        tax_rate = 0.25;
    }
    else {
        tax_rate = 0.30;
    }
    
    tax = gross_salary* tax_rate;
    pension = basic_salary*0.7;
    net_salary= gross_salary - tax - pension;
    cout<<"Your net salary is "<<net_salary;
    
    return 0;
}

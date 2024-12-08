#include<iostream>
using namespace std;
const int rate = 960;

int main(){
    double file_size, time_taken;
    
    cout<<"Enter file size in byte: "; //
    cin>>file_size;
        time_taken = file_size / rate;
        int days, hours, minutes;
        days = time_taken/86400;
        hours = time_taken/3600;
        minutes = time_taken/ 60;

        cout<<"The transmission time for "<< file_size<<" bytes is: "<<endl
            <<days<<" days."<<endl
            <<hours<<" hours."<<endl
            <<minutes<< " minutes."<<endl
            <<time_taken<<" seconds.";
    

    return 0;
    

}
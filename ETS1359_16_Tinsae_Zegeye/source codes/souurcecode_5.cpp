#include<iostream>
using namespace std;
//declare and initialilze transmmision power persecond (byte/sec)
const int rate = 960;

int main(){
    //declare a variable to store the size of the file and time taken for the file to be tranasfered
    double file_size, time_taken;
    
    cout<<"Enter file size in byte: "; //
    cin>>file_size;
    //time in second
        time_taken = file_size / rate;
        //declare a variable to store the time taken in days, hours and minutes.
        int days, hours, minutes;
        //convert the time taken from second to days hours and minutes
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

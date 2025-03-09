#include<iostream>
using namespace std;    
main(){
    int holidays;
    int working_days;
    int time;
    int hours;
    int minutes;
    int diff;
    

    cout<<"Enter the number of holidays: ";
    cin>>holidays;
    cout<<endl;

    working_days = 365 - holidays;
    time=(working_days*63) + (holidays*127);
    
    

    if(time<=30000)
    {
        diff = 30000 - time;
        cout<<"Tom sleeps well"<<endl;
        hours = diff/60;
        minutes = diff%60;
        cout<<hours<<" hours and "<<minutes<<" minutes less for play"<<endl;

    }
    else
    {
        diff = time-30000;
        cout<<"Tom will run away"<<endl;
        hours = diff/60;
        minutes = diff%60;
        cout<<hours<<" hours and "<<minutes<<" minutes for play"<<endl;

    }

   
}
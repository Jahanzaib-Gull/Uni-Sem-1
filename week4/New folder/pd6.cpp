#include<iostream>
using namespace std;    
main(){
    int speed;
    
    cout<<"Enter the speed of the car: ";
    cin>>speed;
    cout<<endl;

    if (speed<=10)
    {
        cout<<"Speed is slow";
    }
    if (speed>10)
    {
        if (speed<=50)
        {
            cout<<"Speed is moderate";
        }
    }
    if (speed>50)
    {
        if (speed<=150)
        {
            cout<<"Speed is fast";
        }
    }
    if (speed>150)
    {
        if (speed<=1000)
        {
            cout<<"Speed is ultra fast";
        }
    }
    if (speed>1000)     
    {
        cout<<"Speed is extremely fast";
    }
    
    
}
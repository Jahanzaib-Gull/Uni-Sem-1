#include<iostream>
using namespace std;    
main(){
    int temp1;
    int temp2;

    cout<<"Enter the temperature of city 1: ";
    cin>>temp1;
    cout<<endl;

    cout<<"Enter the temperature of city 2: ";
    cin>>temp2;
    cout<<endl;
    
    if (temp1-temp2>10)
    {
       cout<<"Difference is greater than 10 " <<endl;
    }
    if (temp2-temp1>10)
        {
       cout<<"Difference is greater than 10 "<<endl;
    }

    cout<<"Program ends ";
}
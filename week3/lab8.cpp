#include<iostream>
using namespace std;

main(){
int volts;
int current;
int watts;

cout<<"Enter voltage(in volts): ";
cin>>volts;
cout<<endl;

cout<<"Enter current(in amperes): ";
cin>>current;
cout<<endl;

watts=volts*current;
cout<<"The power is "<<watts<<" watts";
}
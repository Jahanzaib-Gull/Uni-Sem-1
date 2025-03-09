#include<iostream>
using namespace std;

main(){
int charge;
int time;
float current;

cout<<"Enter the charge(Q) in Coulombs: ";
cin>>charge;
cout<<endl;

cout<<"Enter the time(t) in seconds: ";
cin>>time;
cout<<endl;

current=charge/time;
cout<<"The current(I) is: "<<current<<"Amperes";
}



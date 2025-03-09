// A toy car accelerates from initial velocity to final velocity in some time. You have to write the
// C++ program for calculating the Final Velocity. Take initial velocity, acceleration, and time as
// input from the user and calculate the final velocity of the car, and display it on the screen.
// The formula to Calculate the Acceleration is

// Acceleration = (Final velocity - Initial velocity) / Time

// Remember: You have to calculate the final velocity



#include<iostream>
using namespace std;

main(){
int a;
int t;
int vf;
int vi;

cout<<"Enter Initial Velocity(m/s): ";
cin>>vi;
cout<<endl;

cout<<"Enter Acceleration(m/s^2): ";
cin>>a;
cout<<endl;

cout<<"Enter time(s): ";
cin>>t;
cout<<endl;

vf=a*t+vi;
cout<<"final velocity(m/s): "<<vf;
}
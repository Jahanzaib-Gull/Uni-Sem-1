#include<iostream>
using namespace std;

main(){
int p;
int b;
int total;

cout<<"Enter the current world population: ";
cin>>p;
cout<<endl;

cout<<"Enter the monthly birth rate (number of birts per month): ";
cin>>b;
cout<<endl;

total=2*12*3*10+p;
cout<<"The total population in three decades will be: "<<total;
}
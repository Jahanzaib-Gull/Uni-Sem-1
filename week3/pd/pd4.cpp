// Create a program that calculates the chance of being an imposter in the AMONG US game.
// The formula for the chances of being an imposter is 100 × (i / p) where i is the imposter count
// and p is the player count. Make sure to round the value as integer and print the value as a
// percentage.


#include<iostream>
using namespace std;

main(){
float i;
float p;
float result;
int chance;

cout<<"Imposter count: ";
cin>>i;
cout<<endl;

cout<<"Player count: ";
cin>>p;
cout<<endl;

result=i/p;
chance=100*result;
cout<<"Chance of being an imposter: "<<chance<<"%";
}
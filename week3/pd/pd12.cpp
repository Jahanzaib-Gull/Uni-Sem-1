// You are tasked with developing a program to analyze a person's residence history and calculate
// the average duration they've spent living in a single house. This calculation is based on two
// critical factors: the person's current age and the number of times they've moved from one house
// to another.
// Input Data:
// 1. The person's age (age) represented as an integer.
// 2. The number of times they've moved house (moves) also represented as an integer.
// The goal is to develop a program that can efficiently calculate the average number of years the
// person has lived in a single house based on this input.



#include<iostream>
using namespace std;

main(){
int n;
int h;
int w;
int total;

cout<<"Number of square meters you can paint: ";
cin>>n;
cout<<endl;

cout<<"Width of single wall: ";
cin>>w;
cout<<endl;

cout<<"Height of a single wall: ";
cin>>h;
cout<<endl;

total=n/(h*w);
cout<<"number of walls you can paint: "<<total;
}



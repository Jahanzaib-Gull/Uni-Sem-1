// The problem statement for this particular challenge is as follows:
// "Given an n-sided regular polygon, calculate and print the total sum of internal angles (in
// degrees). Use the formula (n - 2) x 180, which gives the sum of all the measures of the angles of
// an n-sided polygon."


#include<iostream>
using namespace std;

main(){
int sides;
int degrees;

cout<<"Enter the number of side of the polygon: ";
cin>>sides;
cout<<endl;

degrees=(sides-2)*180;
cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<degrees<<" degrees";
}
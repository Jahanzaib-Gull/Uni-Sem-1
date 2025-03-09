// During each summer, Ahmad and Fatima grow vegetables in their backyard and buy seeds and
// fertilizer from a local nursery. The nursery carries different types of vegetable fertilizers invarious bag sizes. When buying a particular fertilizer, they want to know the price of the
// fertilizer per pound and the cost of fertilizing per square foot. Write a c++ program that inputs
// 1. the size of the fertilizer bag in pounds.
// 2. the cost of the bag.
// 3. and the area in square feet that can be covered by the bag.
// The Algorithm should then output
// 1. the cost of the fertilizer per pound.
// 2. the cost of fertilizing the area per square foot.


#include<iostream>
using namespace std;

main(){
float size;
float cost1;
float area;
int cost2;
int cost3;

cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;
cout<<endl;

cout<<"Enter the cost of the bag: $";
cin>>cost1;
cout<<endl;

cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
cout<<endl;

cost2=cost1/size;
cost3=cost1/area;

cout<<"Cost of fertilizer per pound: $"<<cost2<<endl;
cout<<"Cost of fertilizing per square foot: $"<<cost3;
}
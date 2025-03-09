// create a C++ program to calculate the sum of the individual digits
// of a 4-digit number. This program will allow you to input any 4-digit number, and it will use the
// modulus operator to extract each digit and find their sum.


#include<iostream>
using namespace std;

main(){
int no;
int a,b,c,d;
int sum;

cout<<"Enter a 4-digit number: ";
cin>>no;
cout<<endl;

a=no%10;
no=no/10;

b=no%10;
no=no/10;

c=no%10;
no=no/10;

d=no%10;
no=no/10;

sum=a+b+c+d;

cout<<"sum of individual digits: "<<sum;
}
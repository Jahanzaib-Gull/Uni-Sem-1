#include<iostream>
using namespace std;

main(){
    int num,dots;
    cout<<"Enter the triangle number: ";
    cin>>num;
    dots=(num*(num+1))/2;
    cout<<"The number of dots in triangle number "<<num<<" is: "<<dots;
}
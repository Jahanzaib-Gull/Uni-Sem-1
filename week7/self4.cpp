#include<iostream>
using namespace std;

main(){
    int num,fact=1;
    cout<<"Enter the number: ";
    cin>>num;
    for (int x = 1; x <= num; x++)
    {
        fact=fact*x;
    }
    cout<<"The factorial of "<<num<<" is: "<<fact;
}
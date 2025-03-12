#include<iostream>
using namespace std;

main(){
    int num1,num2,num3;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<endl;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<endl;
    cout<<"Enter the third number: ";
    cin>>num3;
    cout<<endl;
    if(num1>num2){
        if(num1>num3){
            cout<<"The greatest number is: "<<num1<<endl;
        }
        else{
            cout<<"The greatest number is: "<<num3<<endl;
        }
    }
    else{
        if(num2>num3){
            cout<<"The greatest number is: "<<num2<<endl;
        }
        else{
            cout<<"The greatest number is: "<<num3<<endl;
        }
    }
}
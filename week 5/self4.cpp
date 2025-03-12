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
    if(num1>=50 && num2<=50 && num3<=50){
        cout<<"one of the values is greater than or equal to 50"<<endl;
    }
    else if(num2>=50 && num1<=50 && num3<=50){
        cout<<"one of the values is greater than or equal to 50"<<endl;
    }
    else if(num3>=50 && num1<=50 && num2<=50){
        cout<<"one of the values is greater than or equal to 50"<<endl;
    }
    else{
        cout<<"none of the values is greater than or equal to 50"<<endl;
    }
      
}
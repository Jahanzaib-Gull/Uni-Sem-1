#include<iostream>
using namespace std;

main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<endl;

    if (num!=200)
    {
        float num1,num2,num3,num4;
        cout<<"Enter number1";
        cin>>num1;
        cout<<endl;
        cout<<"Enter number2";
        cin>>num2;
        cout<<endl;
        cout<<"Enter number3";
        cin>>num3;
        cout<<endl;
        cout<<"Enter number4";
        cin>>num4;
        cout<<endl;

        cout<<"The average of these numbers are:"<<(num1+num2+num3+num4)/4;

    }
}
#include<iostream>
using namespace std;

main(){
    int num1, num2, GDC, LCM, add;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    for (int x = 1; x<=num1 && x<=num2 ; x++)
    {
        if (num1%x==0 && num2%x==0)
        {
            GDC=x;
        }
    }
    cout<<"GDC: "<<GDC<<endl;
    add=num1+num2;
    LCM=num1*num2/GDC;
    cout<<"LCM: "<<LCM;
}
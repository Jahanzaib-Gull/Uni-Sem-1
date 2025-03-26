#include<iostream>
using namespace std;

main(){
    int num,sum;
    cout<<"Enter a number: ";
    cin>>num;
    for (int x = 0; x < 4; x++)
    {
        int a1=num%10;
        sum=sum+a1;
        num=num/10;
    }
    cout<<"The sum of digits: "<<sum;
    
}
#include<iostream>
using namespace std;

main(){
    int num,digit,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the digit to check: ";
    cin>>digit;

    while (num>0)
    {
        if (num%10==digit)      
        {
            count++;
        }
        num=num/10; 
    }
    cout<<"Frequency of "<<digit<<": "<<count<<endl;
    

}
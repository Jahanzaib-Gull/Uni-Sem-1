#include<iostream>
using namespace std;

main(){
    int num,digit,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    if (num==0)
    {
        count++;
    }
    

    if (num<0)
    {
        num=num*-1;
    }
    

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
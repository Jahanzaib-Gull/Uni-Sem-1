#include<iostream>
using namespace std;

main(){
    int num , count=0 ;
    cout<<"Enter the number: ";
    cin>>num;
    if (num=0)
    {
        count++;
    }
    if (num<0)
    {
        num=num*-1;
    }
    while(num!=0){
        count++;
        num=num/10;
    }

    cout<<"The total number of digits: "<<count;
}
#include<iostream>
using namespace std;

main(){
    int num , count=0 ;
    cout<<"Enter the number: ";
    cin>>num;
    if (num=0)
    {
        count++;
        cout<<"The total number of digits: "<<count;
    }
    while(num!=0){
        count=count+1;
        num=num/10;
        cout<<"The total number of digits: "<<count;
    }
}
#include<iostream>
using namespace std;

main(){
    int num=0,sum=0;
    while(!(num<0)){
        sum=sum+num;
        cout<<"Enter the number: ";
        cin>>num;
    }
    cout<<"The sum of the entered numbers is: "<<sum;
}
#include<iostream>
using namespace std;

main(){
    int num,sum=0;
    for (int x = 1; x <= 5; x++)
    {
        cout<<"Enter the number "<<x<<":";
        cin>>num;
        sum=sum+num;
    }
    cout<<"The sum of given 5 numbers is: "<<sum;
    
}
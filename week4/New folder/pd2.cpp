#include<iostream>
using namespace std;    
main(){
    int speed;
    
    cout<<"Enter the speed of car: ";
    cin>>speed;
    cout<<endl;

    if (speed<=100)
    {
        cout<<"Perfect! You are moving at normal speed";
    }
    else{
        cout<<"Halt....YOU WILL BE CHALLANED!!!";
    }
    
}
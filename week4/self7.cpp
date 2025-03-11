#include<iostream>
using namespace std;

main(){
    int num1,num2,num3,num4,num5;
    float perc;

    cout<<"Enter marks of English:";
    cin>>num1;
    cout<<endl;
    cout<<"Enter marks of Computer:";
    cin>>num2;
    cout<<endl;
    cout<<"Enter marks of Math:";
    cin>>num3;
    cout<<endl;
    cout<<"Enter marks of Calculus:";
    cin>>num4;
    cout<<endl;
    cout<<"Enter marks of Urdu:";
    cin>>num5;
    cout<<endl;

    perc=(num1+num2+num3+num4+num5)/500.0*100;
    cout<<"Your percentage:"<<perc<<"%"<<endl;


    if (perc>=70)
    {
        cout<<"You are brilliant student";  
    }
    else
    {
        cout<<"Keep working harder";
    }
    
}
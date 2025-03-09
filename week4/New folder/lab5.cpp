#include<iostream>
using namespace std;

main(){
    string b1,b2,b3;
    int a1,a2,a3;

    cout<<"Enter first brother name: ";
    cin>>b1;
    cout<<endl;

    cout<<"Enter the age of first brother: ";
    cin>>a1;
    cout<<endl;

    cout<<"Enter second brother name: ";
    cin>>b2;
    cout<<endl;

    cout<<"Enter the age of second brother: ";
    cin>>a2;
    cout<<endl;

    cout<<"Enter third brother name: ";
    cin>>b3;
    cout<<endl;

    cout<<"Enter the age of third brother: ";
    cin>>a3;
    cout<<endl;

    if (a1>a2)
    {
        if (a1>a3)
        {
            cout<<b1<<" is older than others";
        }
        
    }
    
    if (a3>a2)
    {
        if (a3>a1)
        {
            cout<<b3<<" is older than others";
        }
        
    }

    
    if (a2>a3)
    {
        if (a2>a1) 
        {
            cout<<b2<<" is older than others";
        }
        
    }
    if(a1==a2)
    {
        if(a1==a3)
        {
            cout<<"All brothers are of same age";
        }
    }
    
    
    
}
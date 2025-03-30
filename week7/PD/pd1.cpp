#include<iostream>
using namespace std;

main(){
    int num, ampl;
    cout<<"Enter the parameter number: ";
    cin>>num;
    if (num>=1)
    {
        for (int x = 1; x <= num; x++)
        {
            if (x%4==0)
            {
                ampl=x*10;
            }
            else
            {
                ampl=x;
            }
            cout<<ampl<<", ";
        }
        
    }
    else
    {
        cout<<"The parameter number should be grater than or equal to 1";
    }
    
}
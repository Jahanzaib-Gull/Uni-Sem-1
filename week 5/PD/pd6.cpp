#include<iostream>
using namespace std;

main(){
    string day, fruit;
    float total, kgs;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the name of fruit: ";
    cin>>fruit;
    cout<<"Enter the KGs: ";
    cin>>kgs;
    
    if (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday") 
    {
        if (fruit=="banana")
        {
            total=kgs*2.50;
            cout<<"Total: "<<total;
        }
        else if (fruit=="apple")
        {
            total=kgs*1.20;
            cout<<"Total: "<<total;
        }
        else if (fruit=="orange")
        {
            total=kgs*0.85;
            cout<<"Total: "<<total;
        }
        else if (fruit=="grapefruit")
        {
            total=kgs*1.45;
            cout<<"Total: "<<total;
        }
        else if (fruit=="kiwi")
        {
            total=kgs*2.70;
            cout<<"Total: "<<total;
        }
        else if (fruit=="pineapple")
        {
            total=kgs*5.5;
            cout<<"Total: "<<total;
        }
        else if (fruit=="grapes")
        {
            total=kgs*3.85;
            cout<<"Total: "<<total;
        }
        else
        {
            cout<<"The fruit you entered is not available";
        }
        
    }
    else if (day=="saturday"||day=="sunday")
    {
        if (fruit=="banana")
        {
            total=kgs*2.70;
            cout<<"Total: "<<total;
        }
        else if (fruit=="apple")
        {
            total=kgs*1.25;
            cout<<"Total: "<<total;
        }
        else if (fruit=="orange")
        {
            total=kgs*0.90;
            cout<<"Total: "<<total;
        }
        else if (fruit=="grapefruit")
        {
            total=kgs*1.60;
            cout<<"Total: "<<total;
        }
        else if (fruit=="kiwi")
        {
            total=kgs*3.0;
            cout<<"Total: "<<total;
        }
        else if (fruit=="pineapple")
        {
            total=kgs*5.50;
            cout<<"Total: "<<total;
        }
        else if (fruit=="grapes")
        {
            total=kgs*4.20;
            cout<<"Total: "<<total;
        }
        else
        {
            cout<<"The fruit you entered is not available";
        }
    }
    else
    {
        cout<<"Invalid inputs";
    }

    
    
}
#include<iostream>
using namespace std;

main(){
    string month;
    int stays;
    float apartment, studio;

    cout<<"Enter the name of month: ";
    cin>>month;
    cout<<"Enter number of stays: ";
    cin>>stays;

    if ((month=="may"||month=="october")&& stays<=7)
    {
        studio=stays*50;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*65;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else if ((month=="may"||month=="october") && (stays>7||stays<=14))
    {
        studio=stays*50-stays*.05;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*65;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else if ((month=="may"||month=="october") && stays>14)
    {
        studio=stays*50-stays*0.3;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*65-stays*0.1;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else if ((month=="june"||month=="september")&& stays<=14)
    {
        studio=stays*75.2;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*68.7;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else if ((month=="june"||month=="september")&& stays>14)
    {
        studio=stays*75.2-stays*0.2;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*68.7-stays*0.1;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else if ((month=="july"||month=="august")&& stays<=14)
    {
        studio=stays*76;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*77;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else if (month=="july"||month=="august")
    {
        studio=stays*76;
        cout<<"Studio: "<<studio<<"$";
        cout<<endl;
        apartment=stays*77-stays*0.1;
        cout<<"Apartment: "<<apartment<<"$";
    }
    else
    {
        cout<<"We are off in this month";
    }
}
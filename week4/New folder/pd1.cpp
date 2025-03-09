#include<iostream>
using namespace std;    
main(){
    string country;
    int price;
    float discount;

    cout<<"Enter the country: ";
    cin>>country;
    cout<<endl;

    cout<<"Enter the ticket price in dollars: ";
    cin>>price;
    cout<<endl;

    if(country=="ireland")
    {
        discount=price-0.10*price;
        cout<<"Amount after discount: "<<discount;
    }
    else
    {
        discount=price-0.05*price;
        cout<<"Amount after discount: "<<discount;
    }


}
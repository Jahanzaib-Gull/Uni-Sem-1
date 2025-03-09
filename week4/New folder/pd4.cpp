#include<iostream>
using namespace std;    
main()
{
    int white;
    int red;
    int tulips;
    float price;
    float discount;

    cout<<"Enter the number of white roses: ";
    cin>>white;
    cout<<endl;

    cout<<"Enter the number of red roses: ";
    cin>>red;   
    cout<<endl;

    cout<<"Enter the number of tulips: ";
    cin>>tulips;
    cout<<endl;

    price=2*red+4.10*white+2.50*tulips;
    cout<<"Total price is: "<<price<<"$";
    cout<<endl;
    
    if (price>200)
    {
        discount=price*0.2;
        cout<<"Price after discount is: "<<price-discount<<"$";
    }
    
}
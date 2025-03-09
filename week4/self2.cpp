#include<iostream>
using namespace std;

main(){
    int price;
    float discount;

    cout<<"Enter Total Price in Dollars:";
    cin>>price;
    cout<<endl;

    if (price==500)
    {
        discount=price*0.05;
        cout<<"Price after discount:"<<discount;   
    }
    cout<<"Price after discount:"<<price;   
}
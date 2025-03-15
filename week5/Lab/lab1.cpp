#include<iostream>
using namespace std;

main(){
    float total;
    cout<<"Enter the total amount: ";
    cin>>total;
    cout<<endl;
    total = total - (total * 0.10);
    cout<<"Total amount after 10% discount: "<<total;
}
#include<iostream>
using namespace std;

main(){
    float total;
    string day,month;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<endl;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<endl;
    cout<<"Enter the total amount: ";
    cin>>total;
    cout<<endl;
    if(day=="Sunday" && (month=="October"||month=="March")){
        total=total-(total*0.10);
    }
    cout<<"Payable amount: "<<total;
}
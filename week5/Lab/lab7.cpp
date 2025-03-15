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
    if(day=="Sunday" && (month=="October"||month=="March"||month=="August")){
        total=total-(total*0.10);
    }
    else if(day=="Sunday" && (month=="November"||month=="December")){
        total=total-(total*0.05);
    }
    cout<<"Payable amount: "<<total;
}
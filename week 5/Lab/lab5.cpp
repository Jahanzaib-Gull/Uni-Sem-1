#include<iostream>
using namespace std;

main(){
    float total;
    string day;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<endl;
    cout<<"Enter the total amount: ";
    cin>>total;
    cout<<endl;
    if(day=="Sunday"){
        total=total-(total*0.10);
    }
    else if(day=="Monday"){
        total=total-(total*0.08);
    }
    else{
        total=total-(total*0.05);
    }
    cout<<"Payable amount: "<<total;
}
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
    if(day == "Sunday" && total > 5000){
        total = total - (total * 0.10);
    }
    if(total > 5000 && day != "Sunday"){
        total = total - (total * 0.05);
    }
    cout<<"Payable amount: "<<total;
}
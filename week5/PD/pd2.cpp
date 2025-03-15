#include<iostream>
using namespace std;

main(){
    string country;
    cout<<"Enter the name of country you live in: ";
    cin>>country;
    cout<<endl;
    if((country!="Germany")&&(country!="Australia"))
        cout<<"You should come to visit Germany or Australia sometime! ";
}    
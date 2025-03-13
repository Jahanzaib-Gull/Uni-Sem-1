#include<iostream>
using namespace std;

main(){
    string temp,humid;
    cout<<"Enter the temperature: ";
    cin>>temp;
    cout<<endl;
    cout<<"Enter the humidity: ";
    cin>>humid;
    cout<<endl;
    if(temp=="warm"&&humid=="dry")
        cout<<"Play tennis";
    else if(temp=="warm"&&humid=="humid")
        cout<<"Swim";
    else if(temp=="cold"&&humid=="dry")
        cout<<"Play basketball";
    else if(temp=="cold"&&humid=="humid")
        cout<<"Watch TV";
    else
        cout<<"Invalid inputs";

}
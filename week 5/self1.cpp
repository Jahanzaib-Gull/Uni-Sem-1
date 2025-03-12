#include<iostream>
using namespace std;

main(){
    string b1,b2,b3;
    int a1,a2,a3;
    cout<<"Enter thename of first brother: ";
    cin>>b1;
    cout<<endl;
    cout<<"Enter the age of first brother: ";   
    cin>>a1;
    cout<<endl;
    cout<<"Enter the name of second brother: ";
    cin>>b2;
    cout<<endl;
    cout<<"Enter the age of second brother: ";
    cin>>a2;
    cout<<endl;
    cout<<"Enter the name of third brother: ";
    cin>>b3;
    cout<<endl;
    cout<<"Enter the age of third brother: ";
    cin>>a3;
    cout<<endl;
    if(a1<a2 && a1<a3){
        cout<<"The youngest brother is: "<<b1<<endl;
    }
    else if(a2<a1 && a2<a3){
        cout<<"The youngest brother is: "<<b2<<endl;
    }
    else if(a3<a1 && a3<a2){
        cout<<"The youngest brother is: "<<b3<<endl;
    }
    else{
        cout<<"All brothers are of same age"<<endl;
    }
}
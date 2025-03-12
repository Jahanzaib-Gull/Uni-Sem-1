#include<iostream>
using namespace std;    

main(){
    string name;
    cout<<"Enter the name of Province you live in: ";
    cin>>name;
    cout<<endl;
    if(!(name=="sindh")){
        cout<<"You should visit the province of Sindh"<<endl;
    }
}
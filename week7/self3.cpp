#include<iostream>
using namespace std;

main(){
    string name;
    cout<<"Enter the name :";
    cin>>name;
    while(!(name=="END")){
        cout<<"Hello "<<name<<endl;
        cout<<"Enter the name :";
        cin>>name;
    }
    cout<<name;
}
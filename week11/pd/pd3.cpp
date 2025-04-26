#include<iostream>
using namespace std;

main(){
    bool same=false;
    string arr[4];
    cout<<"Enter 4 strings: "<<endl;
    for(int i=0; i<4; i++){
        cout<<"Enter string "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=1; i<4; i++){
        if(arr[i]==arr[i-1]){
            same=true;
        }
    }
    if(same){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
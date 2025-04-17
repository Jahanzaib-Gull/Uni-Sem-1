#include<iostream>
using namespace std;

main(){
    char ch='A';
    int num;
    cout<<"Enter number of rows:";
    cin>>num;
    for(int i=1; i<=num;i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
            if(ch>'Z'){
                ch='A';
            }
        }
        cout<<endl;
    }
}
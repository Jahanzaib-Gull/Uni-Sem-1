#include<iostream>
using namespace std;

main(){
    int num;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1 ;j<=num;j++){
            if(i>1&&j>1&&i<num&&j<num){
                cout<<" ";
            }
            else{
                cout<<"#";
            }
            
        }
        cout<<endl;
    }
}
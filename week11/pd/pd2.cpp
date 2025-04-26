#include<iostream>
using namespace std;

main(){
    bool sevenflag = false;
    int num;
    cout<<"Enter number of integers you want to enter: ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter integer "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0; i<num; i++){
        int temp;
        while(arr[i]>0){
            temp=arr[i]%10;
            if(temp==7){
                sevenflag=true;
                break;
            }
            arr[i]=num/10;
        }
    }
    if(sevenflag){
        cout<<"Boom!"<<endl;
    }
    else{
        cout<<"There is no 7 in the array"<<endl;
    }
}
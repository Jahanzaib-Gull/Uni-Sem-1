#include<iostream>
using namespace std;

main(){
    int num,n;
    cout<<"Enter number of integers in an array: ";
    cin>>num;
    cout<<"Enter number of times even-odd transformation need to be done:";
    cin>>n;
    int arr[num];
    cout<<"Enter "<<num<<" integers: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    for(int i=0; i<num; i++){
        if(arr[i]==0||arr[i]%2==0){
            arr[i]=arr[i]-2*n;
        }
        else{
            arr[i]=arr[i]+2*n;
        }
    }
    cout<<"After transformation: ";
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
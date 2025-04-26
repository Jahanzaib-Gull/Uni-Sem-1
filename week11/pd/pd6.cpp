#include<iostream>
using namespace std;

main(){
    int num,time=0;
    cout<<"Enter number of colors in an array: ";
    cin>>num;
    string arr[num];
    cout<<"Enter "<<num<<" colors: ";   
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    for(int i=0; i<num; i++){
        time+=2;
        if(i>0 && arr[i]!=arr[i-1]){
            time+=1;
        }
    }
    cout<<"Time taken to paint: "<<time<<"s"<<endl;
}
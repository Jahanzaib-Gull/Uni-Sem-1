#include<iostream>
using namespace std;

main(){
    int product,num;
    cout<<"Enter the number: ";
    cin>>num;

    for (int x = 1; x <=10; x++)
    {
        product=x*num;
        cout<<num<<"*"<<x<<"="<<product<<endl;
    }
    
}
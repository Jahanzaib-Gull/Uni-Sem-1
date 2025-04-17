#include <iostream>
using namespace std;

main()
{
    cout<<"Fibonacci Triangle"<<endl;
    
    int num;
    cout<<"Enter number of rows:";
    cin>>num;
    for(int i=1; i<=num;i++){
        int first=1,second=1,next;
        if(num>=1){
            cout<<first<<" ";
        }
        if(num>=2){
            cout<<second<<" ";
        }
        for(int j=3;j<=i;j++){
            next=first+second;
            cout<<next<<" ";
            first=second;
            second=next;
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;

main()
{
    int num;
    cout<<"Enter the number that will be at the middle right corner:";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int k=num-1;k>=1;k--){
        for(int z=1;z<=k;z++){
            cout<<z<<" ";
        }
        cout<<endl;
    }
}
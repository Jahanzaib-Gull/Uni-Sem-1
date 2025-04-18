#include<iostream>
using namespace std;

main(){
    int n ,m,count;
    cout<<"Enter the starting number ";
    cin>>n;
    cout<<"Enter the ending number ";
    cin>>m;
    cout<<"The prime numbers between "<<n<<" and "<<m<<" are: ";
    for(int i=n; i<=m; i++){
        bool isPrime = true;
        if(i<2){
            isPrime = false;
        }
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";

            count++;
        }
        
    }
    if(count==0){
        cout<<"No prime number in this range";
    }
}
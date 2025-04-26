#include<iostream>
using namespace std;

main(){
    int num[10];
    for(int i = 0; i < 10; i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }
    cout<<"numbers in reversed order are: "<<endl;
    for(int i = 9; i >= 0; i--){
        cout << num[i] << " ";
    }
}
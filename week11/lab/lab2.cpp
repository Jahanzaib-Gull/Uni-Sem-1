#include <iostream>
using namespace std;

main(){
    int num[10];
    for(int i = 0; i < 10; i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }
    int smallest = num[0];
    for(int i=0; i < 10; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    cout << "The smallest number is: " << smallest << endl;
}
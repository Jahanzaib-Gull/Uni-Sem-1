#include <iostream>
using namespace std;

 main(){
    int n;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> n;
    int first = 0, second = 1, next;
    if (n == 1) {
        cout << first << endl;
    }
    else if(n==2){
        cout << first << ", " << second;    
    }
    else if(n>2){
        cout << first << ", " << second;  
        for (int i = 2; i < n; i++) {
            next = first + second;
            cout << ", " << next;
            first = second;
            second = next;
        }
    }
    cout << endl;  
}
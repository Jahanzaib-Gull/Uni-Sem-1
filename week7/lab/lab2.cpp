#include <iostream>
using namespace std;

 main(){
    int len;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> len;
    int first = 0, second = 1, next;
    if (len == 1) {
        cout << first << endl;
    }
    else if(len==2){
        cout << first << ", " << second;    
    }
    else if(len>2){
        cout << first << ", " << second;  
        for (int i = 2; i < len; i++) {
            next = first + second;
            cout << ", " << next;
            first = second;
            second = next;
        }
    }
    cout << endl;  
}
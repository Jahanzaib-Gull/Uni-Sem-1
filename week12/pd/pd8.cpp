#include<Iostream>
using namespace std;

void equal(int a, int b) {
    if (a == b) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

main(){
    int a, b;
    cout << "Enter two numbers to check equality: "<<endl;
    cin >> a >> b;
    equal(a, b);
}
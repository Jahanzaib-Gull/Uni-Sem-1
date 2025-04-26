#include<iostream>
using namespace std;

main(){
    int num;
    float sum = 0;
    cout << "Enter the number of resistors are connected in series: ";
    cin >> num;
    float resistance[num];
    for(int i = 0; i < num; i++){
        cout << "Enter the resistance of resistor " << i + 1 << ": ";
        cin >> resistance[i];
    }
    for(int i = 0; i < num; i++){
        sum +=  resistance[i];
    }
    cout << "The total resistance is: " << sum << " ohms" << endl;
}
#include<iostream>
using namespace std;

void inverse(string str){
    if(str == "True"){
        cout << "False" << endl;
    } else if (str == "False"){
        cout << "True" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
}

main(){
    string str;
    cout << "Enter True or False: ";
    cin >> str;
    inverse(str);
}
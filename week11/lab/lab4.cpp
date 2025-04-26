#include<iostream>
using namespace std;

main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    for(int i=0; str[i]!='\0'; i++){
        int ascii = str[i];
        if(ascii=='z'){
            ascii='a';  
        }
        else{
            ascii = ascii + 1;
        }
        char ch = ascii;
        cout << ch;
    }
}
#include<iostream>
using namespace std;

main(){
    string str1, str2;
    int count=0;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    for(int i=0; str1[i]!='\0'; i++){
       for(int j=0; str2[j]!='\0'; j++){
            if(str1[i]==str2[j]){
                cout << "Common character: " << str1[i] << endl;
                count++;
                str2[j] = ' '; 
                break;
            }
        }
    }
    if(count==0){
        cout << "No common characters found." << endl;
    }
    else{
        cout << "Total common characters: " << count << endl;
    }

}
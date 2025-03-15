#include<iostream>
using namespace std;

main(){
    char gender;
    float age;
    cout<<"Enter the gender of the person: ";
    cin>>gender;
    cout<<endl;
    cout<<"Enter the age of the person: ";
    cin>>age;
    cout<<endl;
    if(age>=16 && gender=='m'){
        cout<<"Mr. ";
    }
    else if (age<16 && gender=='m'){
        cout<<"Mister ";
    }
    else if (age>=16 && gender=='f'){
        cout<<"Ms. ";
    }
    else if (age<16 && gender=='f'){
        cout<<"Miss ";
    }
   

}
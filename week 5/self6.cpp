#include<iostream>
using namespace std;

main(){
    string username,password;
    cout<<"Enter the username: ";
    cin>>username;
    cout<<endl;
    cout<<"Enter the password: ";
    cin>>password;
    cout<<endl;
    if(username=="admin"){
        if(password=="admin"){
            cout<<"Welcome Admin"<<endl;
        }
        else if (password!="admin"){
            cout<<"Invalid Password"<<endl;
        }
        else if (password==""){
            cout<<"Password cannot be empty"<<endl;
        }
    }
    else if (username!="admin"){
        cout<<"Invalid Username"<<endl;
    }
    else if (username==""){
        cout<<"Username cannot be empty"<<endl;
    }
}

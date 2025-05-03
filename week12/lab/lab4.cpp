#include<iostream>
using namespace std;

void add(int num1,int num2);
void sub(int num1,int num2);
void mul(int num1,int num2);
void divide(int num1,int num2);

main(){
    int num1,num2;
    char op;
    cout<<"Enter number 1: ";   
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter operator(+,-,*,/): ";
    cin>>op;
    if(op=='+'){
        add(num1,num2);
    }
    else if(op=='-'){
        sub(num1,num2);
    }
    else if(op=='*'){
        mul(num1,num2);
    }
    else if(op=='/'){
        divide(num1,num2);
    }
    else{
        cout<<"Invalid operator"<<endl;
    }
}

void add(int num1,int num2){
    cout<<"sum is:"<<num1+num2<<endl;
}
void sub(int num1,int num2){
    cout<<"sub is:"<<num1-num2<<endl;
}
void mul(int num1,int num2){
    cout<<"mul is:"<<num1*num2<<endl;
}
void divide(int num1,int num2){
    cout<<"div is:"<<num1/num2<<endl;
}
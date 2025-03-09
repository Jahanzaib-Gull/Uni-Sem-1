#include<iostream>
using namespace std;

main(){
    int num;
    float kg;
    cout<<"Enter the number of grams:";
    cin>>num;
    cout<<endl;
    
    if (num>=0)
    {
        kg=num/1000;
        cout<<num<<" grams in kgs are "<<kg<<" Kilograms";
    }
    else{
        cout<<"You entered the wrong value";
    }
    

}
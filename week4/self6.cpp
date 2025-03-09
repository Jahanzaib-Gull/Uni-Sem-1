#include<iostream>
using namespace std;

main(){
    float cel,temp;
    cout<<"Enter the temperature in fahrenheit:";
    cin>>temp;
    cout<<endl;
    cel=5/9*(temp-32);
    cout<<"Given temperature in celcius is:"<<cel;

    if (cel>=40)
    {
        cout<<"Its hot today";
    }
    else{
        cout<<"Nice weather";
    }

}
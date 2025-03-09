// A gardener is selling his harvest on the vegetables market. He is selling vegetables for N coins
// per kilogram and fruits for M coins per kilogram. Write a program that calculates the earnings of
// the harvest in Rupees (Rps). Assume the Rps / coin rate is fixed: 1 Rp == 1.94 coins.
// Input Data and Output Data:
// Four numbers are read from the console, one per line:
// ● First line: vegetable price per kilogram – a floating-point number.
// ● Second line: fruit price per kilogram – a floating-point number.
// ● Third line: total kilograms of vegetables – an integer.
// ● Fourth line: total kilograms of fruits – an integer.
// The output should be the earnings of all fruits and vegetables in Rps on the console.




#include<iostream>
using namespace std;

main(){
float veg;
float fruit;
int veg2;
int fruit2;
float total;

cout<<"Vegetable price per kilogram(in coins): ";
cin>>veg;
cout<<endl;

cout<<"Fruit price per kilogram(in coins): ";
cin>>fruit;
cout<<endl;

cout<<"Total kilogram of Vegetable : ";
cin>>veg2;
cout<<endl;

cout<<"Total kilogram of Vegetable : ";
cin>>fruit2;
cout<<endl;

total=((veg*veg2)+(fruit*fruit2))/1.94;

cout<<"Total earning in Rupees(RPs): "<<total;
}



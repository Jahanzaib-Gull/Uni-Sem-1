// The doctor at the clinic has provided the following weight loss recommendations:
// ● Consume a daily calorie intake of 4000 calories.
// ● Engage in one hour of walking every day.
// The doctor informs clients that by strictly adhering to these suggestions, they can expect to lose 1
// kilogram of weight after 15 days. The clinic wants the software to allow users to input their name
// and calculate the number of days required to lose a specified amount of weight based on these
// recommendations.




#include<iostream>
using namespace std;

main(){
string name;
float weight;
float days;

cout<<"Enter the name of person: ";
cin>>name;
cout<<endl;

cout<<"Enter the target weight loss in kilograms: ";
cin>>weight;
cout<<endl;

days=weight*15;
cout<<name<<"will need "<<days<<" days to lose "<<weight<<" kg of weight by following doctor's suggestion";
}
#include<iostream>
using namespace std;

main(){
string name;
int wins;
int draws;
int losses;
int points;

cout<<"Enter the name of cricket team: ";
cin>>name;
cout<<endl;

cout<<"Enter the number of wins: ";
cin>>wins;
cout<<endl;

cout<<"Enter the number of draws: ";
cin>>draws;
cout<<endl;

cout<<"Enter the number of losses: ";
cin>>losses;
cout<<endl;

points=(wins*3)+(draws*1)+(losses*0);
cout<<name<<" has obtained "<<points<<" in the Asiaa Cup tounament.";
}

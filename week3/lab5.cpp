#include<iostream>
using namespace std;

main(){
string name;
float matric;
float fsc;
float ecat;
float aggregate;

cout<<"Enter student's name: ";
cin>>name;
cout<<endl;

cout<<"Enter Matric marks(out of 1100): ";
cin>>matric;
cout<<endl;

cout<<"Enter FSC marks(out of 510): ";
cin>>fsc;
cout<<endl;

cout<<"Enter ECAT marks(out of 400): ";
cin>>ecat;
cout<<endl;

aggregate=(ecat/400*50)+(fsc/510*40)+(matric/1100*10);
 
cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}
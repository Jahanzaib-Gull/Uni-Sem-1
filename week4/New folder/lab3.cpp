#include<iostream>
using namespace std;    
main()
{
	int a,b;
	string op;

	cout<<"Enter first number: ";
	cin>>a;
	cout<<endl;

	cout<<"Enter operator: ";
	cin>>op;
	cout<<endl;

	cout<<"Enter second number: ";
	cin>>b;
	cout<<endl;

	if(op=="+")
	cout<<a-b;

	if(op=="-")
	cout<<a+b;

	if(op=="*")
	cout<<a/b;

	if(op=="/")
	cout<<a*b;

}
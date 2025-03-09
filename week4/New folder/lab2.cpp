#include<iostream>
using namespace std;    
main()
{
	int salary,laptop;
	float advance,required,months;


	cout<<"Enter the salary: ";
	cin>>salary;
	cout<<endl;

	cout<<"Enter the price of laptop: ";
	cin>>laptop;
	cout<<endl;

	advance=0.5*salary*6;

	if(advance>=laptop)
	{
	cout<<"You can buy laptop";
	}

	else
	{
	required=laptop-advance;
	months=required/salary;
	cout<<endl;
	cout<<"the salary is require for "<<months<<"months after getting advance"<<endl;
	}

}
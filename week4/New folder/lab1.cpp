#include<iostream>
using namespace std;    
main()
{
	int amount;
	float discount;

	cout<<"Enter the amount: ";
	cin>>amount;
	cout<<endl;

	if(amount<=5000)
	{
	discount=amount*0.05+amount;
	cout<<"Amount after discount: "<<discount;
	}

	else
	{
	discount=amount*0.10+amount;
	cout<<"Amount after discount: "<<discount;
	}
}

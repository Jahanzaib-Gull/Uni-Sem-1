#include<iostream>
using namespace std;

main(){
    int money,year,evens_money=0,odds_money=0,Money_Spent;
    cout<<"Enter the money b/w 1 and 1000000: ";
    cin>>money;
    cout<<"Enter the year b/w 1800 and 1900: ";
    cin>>year;
    for (int x = 1800; x <= year; x++)
    {
        if (x%2==0)
        {
            evens_money += 12000;
        }
        else
        {
            odds_money += 12000+50*(x-1800+18);
        }
        
    }
    Money_Spent=evens_money+odds_money;
    if (money>Money_Spent)
    {
        cout<<"Yes! He will live a carefree and will have "<<money-Money_Spent<<" dollars left"<<endl;
    }
    else
    {
        cout<<"He will need "<<Money_Spent-money<<" dollars to survive"<<endl;
    }
    
    

}
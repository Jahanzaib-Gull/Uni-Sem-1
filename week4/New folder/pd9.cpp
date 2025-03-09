#include <iostream>
using namespace std;

main() {
    int age, score;
    float income;

    cout<<"Enter your age: ";
    cin>> age;

    cout<<"Enter your monthly income: ";
    cin>>income;

    cout<<"Enter your credit score: ";
    cin>>score;

    if (age<18)
    {
        cout<<"You are not eligible for a loan.";
    } 
    else 
    {
        if (income<30000)
        {
            cout<<"Your income is too low for a loan.";
        }
        else
        {
            if (score>=700) 
            {
                cout<<"Loan Approved!";
            } 
            else 
            {
                if (score>=600) 
                {
                    cout<<"Loan Approved with higher interest rates.";
                } 
                else 
                {
                    cout<<"Loan Denied due to low credit score.";
                }
            }
        }
    }

}

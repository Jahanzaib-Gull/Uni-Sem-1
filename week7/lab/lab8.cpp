#include <iostream>
using namespace std;

main()
{
    int age, P, X, Toys_count = 0, even_money = 10, Money_Saved = 0,Total_Money;
    cout << "Enter the age of Lily: ";
    cin >> age;
    cout << "Enter the price of each toy: ";
    cin >> P;
    cout << "Enter the price of washing machine: ";
    cin >> X;
    for (int x = 1; x <= age; x++)
    {
        if (x % 2 == 0)
        {
            Money_Saved += (even_money - 1);
            even_money += 10;
        }
        else
        {
            Toys_count++;
        }
    }
    Total_Money = (Toys_count * P) + (Money_Saved);
    cout << "Total Savings: " << Total_Money << " USD" << endl;
    if (Total_Money >= X)
    {
        cout << "Yes, Lily can buy the washing machine. " << Total_Money - X << " USD is remaining." << endl;
    }
    else
    {
        cout << "No, Lily needs" << X - Total_Money << " USD more." << endl;
    }
}
#include <iostream>

using namespace std;

double Payable(string day, double purchaseAmount)
{
    if (day == "sunday")
    {
        return purchaseAmount * 0.9;
    }
    else
    {
        return purchaseAmount * 0.95;
    }
}

int main()
{
    string day;
    double purchaseAmount;
    double payableAmount;

    while (true)
    {
        cout << "Enter the day of purchase: ";
        cin >> day;

        cout << "Enter the total purchase amount: ";
        cin >> purchaseAmount;

        payableAmount = Payable(day, purchaseAmount);

        cout << "Payable Amount:" << payableAmount<<"$" << endl
             << endl;
    }

    return 0; 
}
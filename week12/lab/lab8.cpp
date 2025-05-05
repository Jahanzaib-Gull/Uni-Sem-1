#include <iostream>
using namespace std;

void payable_amount(string day, float amount)
{
    if (day == "Sunday")
    {
        amount = amount - 0.1 * amount;
    }
    cout << "Payable Amount:" << amount << "$" << endl;
}

main()
{
    string day;
    float amount;
    cout << "Enter the day of the week: ";
    cin >> day;
    cout << "Enter the amount: ";
    cin >> amount;
    payable_amount(day, amount);
    return 0;
}
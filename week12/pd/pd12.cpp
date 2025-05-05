#include <iostream>
using namespace std;

float price(float R_rose, float W_rose, float Tulip)
{
    float total_price;
    total_price = (R_rose * 2.0) + (W_rose * 4.1) + (Tulip * 2.5);
    return total_price;
}

main()
{
    float R_rose, W_rose, Tulip;
    cout << "Enter the number of red roses: ";
    cin >> R_rose;
    cout << "Enter the number of white roses: ";
    cin >> W_rose;
    cout << "Enter the number of tulips: ";
    cin >> Tulip;
    float total_price = price(R_rose, W_rose, Tulip);
    cout << "The total price is: " << total_price << "$" << endl;
    if (total_price > 200)
    {
        total_price = total_price - (total_price * 0.2);
        cout << "The total price after discount is: " << total_price << "$" << endl;
    }
}
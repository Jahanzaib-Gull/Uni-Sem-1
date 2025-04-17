#include <iostream>
using namespace std;

main()
{
    cout << "Enter the cash you want to withdraw: ";
    int cash;
    cin >> cash;
    if (cash % 10 != 0)
    {
        cout << "Please enter the amount in multiples of 10." << endl;
    }
    else
    {
        int thousands = cash / 1000;
        cash = cash % 1000;
        int fiveHundreds = cash / 500;
        cash = cash % 500;
        int hundreds = cash / 100;
        cash = cash % 100;
        int fifties = cash / 50;
        cash = cash % 50;
        int tens = cash / 10;
        cout << "The number of notes you will receive are:" << endl;
        cout << "1000s: " << thousands << endl;
        cout << "500s: " << fiveHundreds << endl;
        cout << "100s: " << hundreds << endl;
        cout << "50s: " << fifties << endl;
        cout << "10s: " << tens << endl;
    }
}
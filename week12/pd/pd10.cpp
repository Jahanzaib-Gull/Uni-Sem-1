#include <iostream>
using namespace std;

void t_price(string name, float price)
{
    if (name == "Pakistan")
    {
        cout << "Total payable amount is: " << price * 0.95 << endl;
    }
    else if (name == "Ireland")
    {
        cout << "Total payable amount is: " << price * 0.90 << endl;
    }
    else if (name == "India")
    {
        cout << "Total payable amount is: " << price * 0.80 << endl;
    }
    else if (name == "England")
    {
        cout << "Total payable amount is: " << price * 0.70 << endl;
    }
    else if (name == "Canada")
    {
        cout << "Total payable amount is: " << price * 0.60 << endl;
    }
    else
    {
        cout << "Invalid country name" << endl;
    }
}
main()
{
    string name;
    float price;
    while(true){
        cout << "Enter country name (or 'exit' to quit): ";
        cin >> name;
        if (name == "exit") {
            break;
        }
        cout << "Enter price: ";
        cin >> price;
        t_price(name, price);
    }
}
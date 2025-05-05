#include <iostream>
using namespace std;

void evenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    evenOrOdd(number);
}
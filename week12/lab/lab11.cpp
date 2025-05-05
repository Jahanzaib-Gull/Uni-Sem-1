#include <iostream>
using namespace std;

void name(string userName)
{
    while (true)
    {
        cout << userName << endl;
    }
}

main()
{
    string Name;
    cout << "Enter your name: ";
    cin >> Name;
    name(Name);
}
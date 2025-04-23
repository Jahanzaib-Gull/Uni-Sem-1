#include <iostream>
using namespace std;

main()
{
    string str;
    int count = 0;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    if (str[count - 1] == 'n')
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
#include <iostream>
using namespace std;

main()
{
    cout << "Enter an starring integer number: ";
    int n;
    cin >> n;
    cout << "Eter an ending integer number less than or equal to 10000: ";
    int m;
    cin >> m;
    cout << "Enter a stopping integer number between" << n << " and " << m << ": ";
    int s;
    cin >> s;
    if (n > m || m > 10000)
    {
        cout << "Invalid input!";
        return 0;
    }
    for (int i = m; i >= n; i--)
    {
        if (i / 2 * 2 == i && i / 3 * 3 == i)
        {
            if (i == s)
            {
                break;
            }
            cout << i << " ";
        }
    }
}
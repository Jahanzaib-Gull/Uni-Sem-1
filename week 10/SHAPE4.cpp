#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter number or rows:";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        int n = i;
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n--;
        }

        cout << endl;
    }
}
#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter the even power of 2:";
    cin >> n;

    for (int i = 0; i <= n; i=i+2)
    {
        if (i == 0)
        {
            cout << "1 ";
        }
        else
        {
            int result = 1;
            for (int j = 2; j <= i; j=j+2)
            {
                result = result * 2 * 2;
            }
            cout << result << " ";
        }
    }
}
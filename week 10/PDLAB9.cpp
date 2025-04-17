#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter the power of 2:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int result=1;
        if (i == 0)
        {
            cout << "1 ";
        }
        else
        {
            for(int j=1; j <= i; j++)
            {
                result = result * 2; 
            }
        
        cout << result<<" ";
        }
    }
}

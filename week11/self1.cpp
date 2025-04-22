#include <iostream>
using namespace std;

main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }
    cout << "The numbers you entered are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    int largest = num[0];
    for (int i = 1; i < 5; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "\nThe largest number is: " << largest << endl;
}
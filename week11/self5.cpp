#include <iostream>
using namespace std;

main()
{
    string pasta[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int num[5];
    int largest, total = 0, smallest;
    string name;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number of " << pasta[i] << " pastas are sold during the past month: ";
        cin >> num[i];
    }
    cout << "sales for each pasta are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << pasta[i] << " : " << num[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        total += num[i];
    }
    cout << "Total sales: " << total << endl;
    largest = num[0];
    name = pasta[0];
    for (int i = 0; i < 5; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            name = pasta[i];
        }
    }
    cout << "The most sold pasta is " << name << endl;
    smallest = num[0];
    name = pasta[0];
    for (int i = 0; i < 5; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
            name = pasta[i];
        }
    }
    cout << "The least sold pasta is " << name << endl;
}

#include <iostream>
using namespace std;

void challan(int speed)
{
    if (speed > 100)
    {
        cout << "Halt.... YOU WILL BE CHALLANED!!!" << endl;
    }
    else
    {
        cout << "Perfect! You are going goood";
    }
}

main()
{
    int speed;
    cout << "Enter the speed of the vehicle: ";
    cin >> speed;
    challan(speed);
}
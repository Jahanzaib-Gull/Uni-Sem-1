#include <iostream>
using namespace std;

main()
{
    int pin;
    string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    cout << "Enter 4 digit pin: ";
    cin >> pin;
    if (pin == 0000 || (pin >= 1000 && pin <= 9999))
    {
        string moves[4];
        int temp=0, n = 0;
        int pins[4];
        for (int i = 3; i>=0; i--)
        {
            pins[i] = pin % 10;
            pin = pin / 10;
        }
        for (int i = 0; i < 4; i++)
        {
            temp = pins[i] + n;
            n++;
            if (temp > 9)
            {
                temp = temp - 10;
            }
            moves[i] = MOVES[temp];
        }
        for (int i = 0; i < 4; i++)
        {
            cout << moves[i]<<" ";
        }
    }
    else
    {
        cout << "Invalid pin" << endl;
    }
}

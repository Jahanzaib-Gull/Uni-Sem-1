#include <iostream>
using namespace std;

void fuel(float distance)
{
    float fuelNeeded = distance * 10;
    float finalFuel;
    if (fuelNeeded < 100)
    {
        finalFuel = 100;
    }
    else
    {
        finalFuel = fuelNeeded;
    }
    cout << "Fuel needed: " << finalFuel << endl;
}

main()
{
    float distance;
    cout << "Enter the distance: ";
    cin >> distance;
    fuel(distance);
}
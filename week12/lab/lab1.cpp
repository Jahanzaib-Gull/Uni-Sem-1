#include <iostream>
using namespace std;

float Fuel(float distance)
{
    return distance * 10;
}

int main()
{
    float distance;
    cout << "Enter the distance: ";
    cin >> distance;
    double fuelNeeded = Fuel(distance);
    cout << "Fuel needed: " << fuelNeeded << endl;
}
#include <iostream>
using namespace std;

void temp(float farenheit);

main()
{
    float farenheit;
    cout << "Enter temperature in farenheit: ";
    cin >> farenheit;
    temp(farenheit);
}


void temp(float farenheit)
{
    if (farenheit == 98)
    {
        cout << "Normal temperature" << endl;
    }
    cout << "Program End" << endl;
}

#include <iostream>
using namespace std;

void inchesToFeet(float inches)
{
    float feet = inches / 12.0;
    cout << "Equivalent in feet: " << feet << endl;
}

int main()
{
    float inches;
    cout << "Enter the measurement in inches: ";
    cin >> inches;
    inchesToFeet(inches);
}
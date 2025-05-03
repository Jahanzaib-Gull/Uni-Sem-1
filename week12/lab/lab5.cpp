#include <iostream>
using namespace std;

void Vote(int age)
{
    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }
}

main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    Vote(age);
}
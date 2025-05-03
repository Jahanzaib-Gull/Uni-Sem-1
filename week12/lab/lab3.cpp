#include <iostream>
using namespace std;

int Stickers(int n)
{
    return 6 * n * n;
}

main()
{
    int sideLength;
    cout << "Enter the side length of the Rubik's Cube: ";
    cin >> sideLength;
    int no_of_stickers = Stickers(sideLength);
    cout << "Number of stickers needed: " << Stickers << endl;
}
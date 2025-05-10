#include <iostream>
using namespace std;

void printsum(int cars[][3], int row_size)
{
    cout << "Enter the elements of the matrix: " << endl;
    int total;
    for (int row = 0; row < row_size; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter the matrix at position [" << row << "][" << col << "]: ";
            cin >> cars[row][col];
            total = total + cars[row][col];
        }
    }
    cout << "The sum of elements in the matrix is: " << total << endl;
}

main()
{
    const int colsize = 3;
    int rowsize;
    int cars[rowsize][colsize];
    cout << "Enter row size: ";
    cin >> rowsize;
    printsum(cars, rowsize);
}
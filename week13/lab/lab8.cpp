#include <iostream>
using namespace std;

void largestColumnFirst(int cars[][5], int rowsize)
{
    int largestsum = 0;
    int col_index;
    int colsum[5] = {0};
    for (int col = 0; col < 5; col++)
    {
        for (int row = 0; row < rowsize; row++)
        {
            colsum[col] += cars[row][col];
        }
        if (colsum[col] > largestsum)
        {
            largestsum = colsum[col];
            col_index = col;
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        int temp = cars[row][0];
        cars[row][0] = cars[row][col_index];
        cars[row][col_index] = temp;
    }
}

main()
{
    int rowsize;
    cout << "Enter row size: ";
    cin >> rowsize;
    int cars[rowsize][5];
    cout << "Enter the elements of the matrix: " << endl;
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Enter the matrix at position [" << row << "][" << col << "]: ";
            cin >> cars[row][col];
        }
    }
    cout << "Original Matrix:" << endl;
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << cars[row][col] << " ";
        }
        cout<<endl;
    }
    largestColumnFirst(cars, rowsize);

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << cars[row][col] << " ";
        }
        cout<<endl;
    }
}
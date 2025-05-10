#include <iostream>
using namespace std;

void print_cars(int cars[][5], int row_size);

main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] = {{10, 7, 12, 10, 4},
                                  {18, 11, 15, 17, 2},
                                  {23, 19, 12, 16, 14},
                                  {7, 12, 16, 0, 2},
                                  {3, 5, 6, 2, 1}};
    print_cars(cars, rowsize);
}

void print_cars(int cars[][5], int row_size)
{
    for (int row = 0; row < row_size; row++)
    {
        for (int col = 0; col, 5; col++)
        {
            cout << cars[row][col] << "\t";
        }
        cout << endl;
    }
}
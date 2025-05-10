#include <iostream>
using namespace std;

int main()
{
    int cars[3][3];
    cout << "Enter the elements of the matrix: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter the matrix at position [" << row << "][" << col << "]: ";
            cin >> cars[row][col];
        }
    }
    cout << "The matrix you entered is: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << cars[row][col] << "\t";
        }
        cout << endl;
    }
    for (int row = 0, same_idx = 0; row < 3; row++, same_idx++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == same_idx && col == same_idx)
            {
                if (cars[row][col] != 1)
                {
                    cout << "The entered matrix is NOT an identity matrix." << endl;
                    return 0;
                }
            }
            else if (cars[row][col] != 0)
            {
                cout << "The entered matrix is NOT an identity matrix." << endl;
                return 0;
            }
        }
    }
    cout << "The entered matrix is an identity matrix." << endl;
}
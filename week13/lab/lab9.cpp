#include <iostream>

using namespace std;

bool areRowsEqual(int row1[][3], int row2[][3], int rowIndex1, int rowIndex2)
{
    for (int j = 0; j < 3; ++j)
    {
        if (row1[rowIndex1][j] != row2[rowIndex2][j])
        {
            return false;
        }
    }
    return true;
}

int countIdenticalRows(int arr[][3], int rows)
{

    int totalIdenticalCount = 0;
    bool counted[rows];
    for (int i = 0; i < rows; ++i)
    {
        counted[i] = false;
    }

    for (int i = 0; i < rows; ++i)
    {
        if (!counted[i])
        {
            int currentCount = 0;
            for (int j = i; j < rows; ++j)
            {
                if (areRowsEqual(arr, arr, i, j))
                {
                    currentCount++;
                    counted[j] = true;
                }
            }
            if (currentCount > 1)
            {
                totalIdenticalCount += currentCount;
            }
        }
    }

    return totalIdenticalCount;
}

int main()
{
    int rows;
    cout << "enter rows number: ";
    cin >> rows;
    int arr[rows][3];
    cout << "Enter the elements of the matrix: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter the matrix at position [" << row << "][" << col << "]: ";
            cin >> arr[row][col];
        }
    }
    int result = countIdenticalRows(arr, rows);
    cout << "countIdenticalArrays(arr, " << rows << ") -> " << result << endl;

    return 0;
}
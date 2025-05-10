#include <iostream>
using namespace std;

string isGoalScored(char field[7][16])
{
    for (int row = 0; row < 3; row++)
    {
        if (row = 0)
        {
            for (int col = 1; col < 15; col++)
            {
                if (field[row][col] == '0')
                {
                    return "True";
                }
            }
        }
        if (row = 1)
        {
            for (int col = 2; col < 14; col++)
            {
                if (field[row][col] == '0')
                {
                    return "True";
                }
            }
        }
        if (row = 0)
        {
            for (int col = 3; col < 13; col++)
            {
                if (field[row][col] == '0')
                {
                    return "True";
                }
            }
        }
    }
    return "False";
}

main()
{
    char field[7][16]{
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' '},
        {' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' '},
        {' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    };

    cout << "enter the coordinate of X and Y[0-15] to goal: ";
    int X, Y;
    cout << "X = ";
    cin >> X;
    cout << "Y = ";
    cin >> Y;
    field[X][Y] = '0';
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < 16; col++)
        {
            cout << field[row][col];
        }
        cout << endl;
    }
    isGoalScored(field);
}
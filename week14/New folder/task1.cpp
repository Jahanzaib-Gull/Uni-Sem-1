#include <iostream>
#include <string>

using namespace std;

string fire(string battle_ship[5][5], string coord)
{
    if (coord.length() == 2 && coord[0] >= 'A' && coord[0] <= 'E' && coord[1] >= '1' && coord[1] <= '5')
    {
        int row = coord[0] - 'A';
        int col = coord[1] - '1';

        if (row >= 0 && row < 5 && col >= 0 && col < 5)
        {
            if (battle_ship[row][col] == ".")
            {
                return "splash";
            }
            else if (battle_ship[row][col] == "*")
            {
                return "BOOM";
            }
            else
            {
                return "Unknown state.";
            }
        }
        else
        {
            return "Target out of bounds.";
        }
    }
    else
    {
        return "Invalid coordinate format.";
    }
}

 main()
{
    string battle_ship[5][5] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."},
    };
    string coord;
    cout << "Enter coordinate to fire torpedo(e.g. , A1, B3, E5): ";
    cin >> coord;
    cout << "Result: " << fire(battle_ship, coord) << endl;
    
}
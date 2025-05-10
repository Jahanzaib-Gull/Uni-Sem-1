#include <iostream>
using namespace std;

const int gridSize = 3;
char board[gridSize][gridSize] = {{' ', ' ', ' '},
                                  {' ', ' ', ' '},
                                  {' ', ' ', ' '}};

bool checkRows(char symbol);
bool checkColumns(char symbol);
bool checkDiagonals(char symbol);
bool isWinner(char symbol);
void printBoard();

main()
{
    char p1 = 'O';
    char p2 = 'X';
    int first_move;
    char current_player;
    int moves_count = 0;

    cout << "Select player 1 for \'O\'" << endl;
    cout << "Select player 2 for \'X\'" << endl;
    cout << "Enter player number for first move:";
    cin >> first_move;

    if (first_move == 1)
    {
        current_player = p1;
        cout << "Player 1 wil move first..." << endl;
    }
    else if (first_move == 2)
    {
        current_player = p2;
        cout << "Player 2 wil move first..." << endl;
    }
    else
    {
        cout << "Invalid player number." << endl;
        cout << "By default player one will move first." << endl;
        current_player = p1;
    }

    for (int i = 0; i < gridSize * gridSize; i++)
    {
        system("CLS");
        int row, col;
        cout << "enter rows [0-" << gridSize - 1 << "] and columns [0-" << gridSize - 1 << "]: " << endl;
        cout << "Rows=";
        cin >> row;
        cout << "Columns=";
        cin >> col;

        if (row >= 0 && row < gridSize && col >= 0 && col < gridSize && board[row][col] == ' ')
        {
            board[row][col] = current_player;
            moves_count++;
            printBoard();
            if (isWinner(current_player))
            {
                printBoard();
                if(current_player=='0'){
                    cout<<"Player 1 wins"<<endl;
                }
                else{
                    cout<<"Player 2 wins"<<endl;
                }
                break;
            }
            current_player = (current_player == 'X' ? 'O' : 'X');
        }
        else
        {
            cout << "Invalid move. Try again." << endl;
        }
    }
    if (moves_count == gridSize * gridSize && !isWinner('X') && !isWinner('O'))
    {
        system("CLS");
        printBoard();
        cout << "It's a draw!" << endl;
    }

    cout << "Thanks for playing game" << endl;
}

bool checkRows(char symbol)
{
    int count = 0;
    for (int row = 0; row < gridSize; row = row + 1)
    {
        count = 0;
        for (int col = 0; col < gridSize; col = col + 1)
        {
            if (board[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == gridSize)
        {
            return 1;
        }
    }
    return 0;
}

bool checkColumns(char symbol)
{
    int count = 0;
    for (int col = 0; col < gridSize; col = col + 1)
    {
        count = 0;
        for (int row = 0; row < gridSize; row = row + 1)
        {
            if (board[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == gridSize)
        {
            return 1;
        }
    }
    return 0;
}

bool checkDiagonals(char symbol)
{
    int count = 0;
    for (int idx = 0; idx < gridSize; idx = idx + 1)
    {
        if (board[idx][idx] == symbol)
        {
            count = count + 1;
        }
    }
    if (count == gridSize)
    {
        return 1;
    }
    count = 0;
    for (int row = 0, col = 2; row < gridSize; row++, col--)
    {
        if (board[row][col] == symbol)
        {
            count = count + 1;
        }
    }
    if (count == gridSize)
    {
        return 1;
    }
    return 0;
}

bool isWinner(char symbol)
{
    if (checkRows(symbol) || checkColumns(symbol) || checkDiagonals(symbol))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printBoard(){
    cout<<"      -------"<<endl;
    cout<<"      |"<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"|"<<endl;
    cout<<"      -------"<<endl;
    cout<<"      |"<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"|"<<endl;
    cout<<"      -------"<<endl;
    cout<<"      |"<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"|"<<endl;
    cout<<"      -------"<<endl;
    cout<<endl;
}
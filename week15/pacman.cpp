#include <iostream>
// #include <fstream>
#include <windows.h>

using namespace std;

const int rows = 31;
const int cols = 71;
// const int tickTime = 100;

bool gameRunning = true;
// bool energizer = false;

void movePacmanLeft();
void movePacmanRight();
void movePacmanUP();
void movePacmanDown();

int pacmanX = 6, pacmanY = 4;
int score = 0;

char mapp[rows][cols + 1] = {
    "#######################################################################",
    "# . . . . . . . . . . . . . . . . ### . . . . . . . . . . . . . . . . #",
    "# O ########### . ############# . ### . ############# . ########### O #",
    "# . ########### . ############# . ### . ############# . ########### . #",
    "# . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . #",
    "# . ###########   ### . ####################### . ### . ########### . #",
    "# . . . . . . . . ### . . . . . . ### . . . . . . ### . . . . . . . . #",
    "############### . #############   ###   ############# . ###############",
    "              # . #############         ############# . #              ",
    "              # . ###                             ### . #              ",
    "############### . ###   _________     _________   ### . ###############",
    "                .       |                     |       .                ",
    "############### . ###   |                     |   ### . ###############",
    "              # . ###   |_____________________|   ### . #              ",
    "              # . ###                             ### . #              ",
    "############### . ###   #######################   ### . ###############",
    "# . . . . . . . . . . . . . . . . ### . . . . . . . . . . . . . . . . #",
    "# O ########### . ############# . ### . ############# . ########### O #",
    "# . . . ####### . . . . . . . . . . . . . . . . . . . . ####### . . . #",
    "##### . ####### . ### . ####################### . ### . ####### . #####",
    "# . . . . . . . . ### . . . . . . ### . . . . . . ### . . . . . . . . #",
    "# . ########################### . ### . ########################### . #",
    "# . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . #",
    "#######################################################################"};
void printMap()
{
    for (int row = 0; row < 24; row++)
    {
        for (int col = 0; col < 71; col++)
        {
            cout << mapp[row][col];
        }
        cout << endl;
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void movePacmanLeft()
{
    if (mapp[pacmanX][pacmanY - 1] == ' ' || mapp[pacmanX][pacmanY - 1] == '.' || mapp[pacmanX][pacmanY - 1] == 'O')
    {
        mapp[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY - 1;
        if ( (pacmanX = 11) && (pacmanY = 0) )
        {
            pacmanY=69;
        }
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (mapp[pacmanX][pacmanY - 1] == '.')
        {
            score++;
        }
    }
}
void movePacmanRight()
{
    if (mapp[pacmanX][pacmanY + 1] == ' ' || mapp[pacmanX][pacmanY + 1] == '.' || mapp[pacmanX][pacmanY + 1] == 'O')
    {
        mapp[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY + 1;
        if ( (pacmanX = 11) && (pacmanY = 70) )
        {
            pacmanY=1;
        }
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (mapp[pacmanX][pacmanY + 1] == '.')
        {
            score++;
        }
    }
}
void movePacmanUP()
{
    if (mapp[pacmanX - 1][pacmanY] == ' ' || mapp[pacmanX - 1][pacmanY] == '.' || mapp[pacmanX - 1][pacmanY] == 'O')
    {
        mapp[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX = pacmanX - 1;
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (mapp[pacmanX - 1][pacmanY] == '.')
        {
            score++;
        }
    }
}
void movePacmanDown()
{
    if (mapp[pacmanX + 1][pacmanY] == ' ' || mapp[pacmanX + 1][pacmanY] == '.' || mapp[pacmanX + 1][pacmanY] == 'O')
    {
        mapp[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX = pacmanX + 1;
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (mapp[pacmanX + 1][pacmanY] == '.')
        {
            score++;
        }
    }
}

void printscore()
{
    gotoxy(99, 5);
    cout << "score : " << score;
}

main()
{
    system("CLS");
    printMap();
    gotoxy(pacmanY, pacmanX);
    cout << "p";
    while (gameRunning)
    {
        Sleep(100);
        printscore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePacmanLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePacmanRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePacmanUP();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
    }
}
// int x = 35, y = 14, effectiveTickTime = tickTime, score = 0, lives = 3;

// bool movingLeft = false;
// bool movingRight = false;
// bool movingUp = false;
// bool movingDown = false;

// void gotoxy(int x, int y);
// char getCharAt(int x, int y);
// void hideCursor();
// void clearScreen();
// void loadMap();
// void printMap();
// void updatePacman();
// void updateGhost1();
// void countScore();

// int main() {
//     clearScreen();
//     hideCursor();
//     loadMap();
//     printMap();
//     while (gameRunning) {
//         Sleep(effectiveTickTime);
//         updatePacman();
//         countScore();
//         gotoxy(0, 28); cout << "Lives: " << lives << "\tScore: " << score;
//     }
//     return 0;
// }

// void updateGhost1() {

// }

// void updatePacman() {
//     // Handle input once (toggle logic)
//     if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
//         effectiveTickTime = tickTime;
//         movingRight = true;
//         movingLeft = movingUp = movingDown = false;
//     }
//     else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
//         effectiveTickTime = tickTime;
//         movingLeft = true;
//         movingRight = movingUp = movingDown = false;
//     }
//     else if (GetAsyncKeyState(VK_UP) & 0x8000) {
//         if (getCharAt(x, y - 1) != '#' && getCharAt(x+1, y-1) != '#' && getCharAt(x-1, y-1) != '#') {
//             effectiveTickTime = tickTime * 1.5;
//             movingUp = true;
//             movingRight = movingLeft = movingDown = false;
//         }
//     }
//     else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
//         if (getCharAt(x, y + 1) != '#' && getCharAt(x+1, y+1) != '#' && getCharAt(x-1, y+1) != '#') {
//             effectiveTickTime = tickTime * 1.5;
//             movingDown = true;
//             movingRight = movingLeft = movingUp = false;
//         }
//     }

//     // Wall hit detection – cancel movement if a wall is ahead
//     if (movingRight && getCharAt(x + 2, y) == '#') movingRight = false;
//     if (movingLeft && getCharAt(x - 2, y) == '#') movingLeft = false;
//     if (movingUp && getCharAt(x, y - 1) == '#') movingUp = false;
//     if (movingDown && getCharAt(x, y + 1) == '#') movingDown = false;

//     // Move Pac-Man
//     gotoxy(x, y); cout << " ";
//     if (movingRight) x++;
//     else if (movingLeft) x--;
//     else if (movingDown) y++;
//     else if (movingUp) y--;
//     gotoxy(x, y); cout << "p";
// }

// void countScore() {
//     if (getCharAt(x + 1, y) == '.' && movingRight) {
//         score++;
//     }
//     else if (getCharAt(x - 1, y) == '.' && movingLeft) {
//         score++;
//     }
//     else if (getCharAt(x, y + 1) == '.' && movingDown) {
//         score++;
//     }
//     else if (getCharAt(x, y - 1) == '.' && movingUp) {
//         score++;
//     }
// }

// void loadMap() {
//     fstream map;
//     map.open("map2.txt", ios::in);
//     if (!map.is_open()) {
//         cerr << "Error: Could not open map file.\n";
//         exit(1);
//     }

//     string line;
//     for (int row = 0; row < 24 && getline(map, line); row++) {
//         for (int col = 0; col < 71 && col < line.length(); col++) {
//             mapp[row][col] = line[col];
//         }
//     }

//     map.close();
// }

// void gotoxy(int x, int y) {
//     COORD coordinates;
//     coordinates.X = x;
//     coordinates.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
// }

// char getCharAt(int x, int y) {
//     CHAR ch;
//     DWORD read;
//     COORD coord = { (SHORT)x, (SHORT)y };
//     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

//     if (ReadConsoleOutputCharacterA(hConsole, &ch, 1, coord, &read)) {
//         return ch;
//     } else {
//         return '\0'; // Return null character if read fails
//     }
// }

// void hideCursor() {
//     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//     CONSOLE_CURSOR_INFO cursorInfo;

//     GetConsoleCursorInfo(hConsole, &cursorInfo);  // Get current cursor settings
//     cursorInfo.bVisible = FALSE;                  // Set cursor visibility to false
//     SetConsoleCursorInfo(hConsole, &cursorInfo);  // Apply the new settings
// }

// void clearScreen() {
//     system("cls");
// }
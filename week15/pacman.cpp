#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

const int rows = 31;
const int cols = 71;
const int tickTime = 100;

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
    "#######################################################################"
};

int x = 35, y = 14, effectiveTickTime = tickTime, score = 0, lives = 3;

bool gameRunning = true;

bool movingLeft = false;
bool movingRight = false;
bool movingUp = false;
bool movingDown = false;



void gotoxy(int x, int y);
char getCharAt(int x, int y);
void hideCursor();
void clearScreen();
void loadMap();
void printMap();
void updatePacman();
void updateGhost1();
void countScore();


int main() {
    clearScreen();
    hideCursor();
    loadMap();
    printMap();
    while (gameRunning) {
        Sleep(effectiveTickTime);
        updatePacman();
        countScore();
        gotoxy(0, 28); cout << "Lives: " << lives << "\tScore: " << score;
    }
    return 0;
}

void updateGhost1() {
    
}

void updatePacman() {
    // Handle input once (toggle logic)
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
        effectiveTickTime = tickTime;
        movingRight = true; 
        movingLeft = movingUp = movingDown = false;
    } 
    else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
        effectiveTickTime = tickTime;
        movingLeft = true; 
        movingRight = movingUp = movingDown = false;
    } 
    else if (GetAsyncKeyState(VK_UP) & 0x8000) {
        if (getCharAt(x, y - 1) != '#' && getCharAt(x+1, y-1) != '#' && getCharAt(x-1, y-1) != '#') {
            effectiveTickTime = tickTime * 1.5;
            movingUp = true; 
            movingRight = movingLeft = movingDown = false;
        }
    } 
    else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
        if (getCharAt(x, y + 1) != '#' && getCharAt(x+1, y+1) != '#' && getCharAt(x-1, y+1) != '#') {
            effectiveTickTime = tickTime * 1.5;
            movingDown = true; 
            movingRight = movingLeft = movingUp = false;
        }
    }

    // Wall hit detection – cancel movement if a wall is ahead
    if (movingRight && getCharAt(x + 2, y) == '#') movingRight = false;
    if (movingLeft && getCharAt(x - 2, y) == '#') movingLeft = false;
    if (movingUp && getCharAt(x, y - 1) == '#') movingUp = false;
    if (movingDown && getCharAt(x, y + 1) == '#') movingDown = false;

    // Move Pac-Man
    gotoxy(x, y); cout << " ";
    if (movingRight) x++; 
    else if (movingLeft) x--;
    else if (movingDown) y++;
    else if (movingUp) y--;
    gotoxy(x, y); cout << "p";
}

void countScore() {
    if (getCharAt(x + 1, y) == '.' && movingRight) {
        score++;
    }
    else if (getCharAt(x - 1, y) == '.' && movingLeft) {
        score++;
    }
    else if (getCharAt(x, y + 1) == '.' && movingDown) {
        score++;
    }
    else if (getCharAt(x, y - 1) == '.' && movingUp) {
        score++;
    }
}

void printMap() {
    for (int row = 0; row < 24; row++) {
        for (int col = 0; col < 71; col++) {
            cout << mapp[row][col];
        }
        cout << endl;
    }
}

void loadMap() {
    fstream map;
    map.open("map2.txt", ios::in);
    if (!map.is_open()) {
        cerr << "Error: Could not open map file.\n";
        exit(1);
    }

    string line;
    for (int row = 0; row < 24 && getline(map, line); row++) {
        for (int col = 0; col < 71 && col < line.length(); col++) {
            mapp[row][col] = line[col];
        }
    }

    map.close();
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAt(int x, int y) {
    CHAR ch;
    DWORD read;
    COORD coord = { (SHORT)x, (SHORT)y };
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (ReadConsoleOutputCharacterA(hConsole, &ch, 1, coord, &read)) {
        return ch;
    } else {
        return '\0'; // Return null character if read fails
    }
}

void hideCursor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(hConsole, &cursorInfo);  // Get current cursor settings
    cursorInfo.bVisible = FALSE;                  // Set cursor visibility to false
    SetConsoleCursorInfo(hConsole, &cursorInfo);  // Apply the new settings
}

void clearScreen() {
    system("cls");
}
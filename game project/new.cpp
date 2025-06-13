#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

const int width = 30;
const int height = 15;
char map[height][width];
int playerX = 1, playerY = 1;
int alienX = width - 2, alienY = height - 2;
int health = 100, score = 0;
bool gameOver = false;

void setupMap() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1)
                map[y][x] = '#';
            else
                map[y][x] = ' ';
        }
    }
    map[playerY][playerX] = 'S';
    map[alienY][alienX] = 'A';

    // Add resources
    for (int i = 0; i < 10; ++i) {
        int rx = rand() % (width - 2) + 1;
        int ry = rand() % (height - 2) + 1;
        if (map[ry][rx] == ' ') map[ry][rx] = '$';
    }
    // Add black holes
    for (int i = 0; i < 5; ++i) {
        int rx = rand() % (width - 2) + 1;
        int ry = rand() % (height - 2) + 1;
        if (map[ry][rx] == ' ') map[ry][rx] = '*';
    }
}

void draw() {
    system("cls");
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            cout << map[y][x];
        }
        cout << endl;
    }
    cout << "Health: " << health << "  Score: " << score << endl;
}

void movePlayer() {
    int newX = playerX;
    int newY = playerY;

    if (GetAsyncKeyState(VK_UP) & 0x8000) newY--;
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) newY++;
    if (GetAsyncKeyState(VK_LEFT) & 0x8000) newX--;
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) newX++;

    if (map[newY][newX] == '#') return;

    char target = map[newY][newX];
    if (target == '$') {
        score += 10;
    } else if (target == '*') {
        health -= 20;
        cout << "Hit a black hole! -20 HP\n";
    } else if (target == 'A') {
        health -= 30;
        cout << "Alien attacked! -30 HP\n";
    }

    map[playerY][playerX] = ' ';
    playerX = newX;
    playerY = newY;
    map[playerY][playerX] = 'S';
}

void moveAlien() {
    map[alienY][alienX] = ' ';
    if (alienX > playerX) alienX--;
    else if (alienX < playerX) alienX++;

    if (alienY > playerY) alienY--;
    else if (alienY < playerY) alienY++;

    if (alienX == playerX && alienY == playerY) {
        health -= 30;
        cout << "The alien caught you! -30 HP\n";
    }

    map[alienY][alienX] = 'A';
}

int main() {
    srand(time(0));
    setupMap();

    while (!gameOver) {
        draw();
        movePlayer();
        moveAlien();

        if (health <= 0) {
            gameOver = true;
            cout << "\nGame Over! Your ship was destroyed.\n";
        }
        Sleep(100); // control game speed
    }

    return 0;
}

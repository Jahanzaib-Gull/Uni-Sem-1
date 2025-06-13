#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

// Screen dimensions
const int WIDTH = 80;
const int HEIGHT = 25;
const int MAX_ENEMIES = 5;
const int MAX_BULLETS = 10;  // Increased for continuous firing

// Screen buffer
char screenBuffer[HEIGHT][WIDTH];

// Game state
int playerX, playerY, playerHealth;
int enemyX[MAX_ENEMIES], enemyY[MAX_ENEMIES], enemyHealth[MAX_ENEMIES];
int activeEnemies = 2;
int level = 1;
bool gameOver = false;

// Bullets (array for continuous firing)
int bulletX[MAX_BULLETS], bulletY[MAX_BULLETS];
bool bulletActive[MAX_BULLETS];
int bulletsCount = 0;

// Enemy bullets
int enemyBulletX[MAX_ENEMIES], enemyBulletY[MAX_ENEMIES];
bool enemyBulletActive[MAX_ENEMIES];

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void clearBuffer() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            screenBuffer[y][x] = ' ';
        }
    }
}

void drawToBuffer(int x, int y, char c) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
        screenBuffer[y][x] = c;
    }
}

void render() {
    gotoxy(0, 0);
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            cout << screenBuffer[y][x];
        }
        if (y < HEIGHT - 1) cout << endl;
    }
}

void drawBorder() {
    for (int x = 0; x < WIDTH; x++) {
        drawToBuffer(x, 0, '#');
        drawToBuffer(x, HEIGHT-1, '#');
    }
    for (int y = 0; y < HEIGHT; y++) {
        drawToBuffer(0, y, '#');
        drawToBuffer(WIDTH-1, y, '#');
    }
}

void setup() {
    playerX = WIDTH / 2;
    playerY = HEIGHT - 2;
    playerHealth = 100;
    
    activeEnemies = 2 + level;
    for (int i = 0; i < activeEnemies; i++) {
        enemyX[i] = 10 + (i * 20);
        enemyY[i] = 2 + (i % 3);
        enemyHealth[i] = 50 + (level * 15);
        enemyBulletActive[i] = false;
    }
    
    // Initialize player bullets
    for (int i = 0; i < MAX_BULLETS; i++) {
        bulletActive[i] = false;
    }
    bulletsCount = 0;
}

void draw() {
    clearBuffer();
    drawBorder();
    
    // Draw player
    drawToBuffer(playerX, playerY, 'O');
    drawToBuffer(playerX, playerY-1, '^');
    
    // Draw enemies
    for (int i = 0; i < activeEnemies; i++) {
        if (enemyHealth[i] > 0) {
            drawToBuffer(enemyX[i], enemyY[i], 'X');
            drawToBuffer(enemyX[i], enemyY[i]+1, 'v');
        }
    }
    
    // Draw player bullets
    for (int i = 0; i < MAX_BULLETS; i++) {
        if (bulletActive[i]) {
            drawToBuffer(bulletX[i], bulletY[i], '*');
        }
    }
    
    // Draw enemy bullets
    for (int i = 0; i < activeEnemies; i++) {
        if (enemyBulletActive[i]) {
            drawToBuffer(enemyBulletX[i], enemyBulletY[i], '*');
        }
    }
    
    // Draw HUD
    string healthStr = "Health: " + to_string(playerHealth);
    string levelStr = "Level: " + to_string(level);
    for (size_t i = 0; i < healthStr.size(); i++) {
        drawToBuffer(2 + i, HEIGHT, healthStr[i]);
    }
    for (size_t i = 0; i < levelStr.size(); i++) {
        drawToBuffer(WIDTH/2 - 5 + i, HEIGHT, levelStr[i]);
    }
    
    render();
}

void input() {
    if (GetAsyncKeyState(VK_LEFT) & 0x8000 && playerX > 1) playerX--;
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000 && playerX < WIDTH-2) playerX++;
    if (GetAsyncKeyState(VK_UP) & 0x8000 && playerY > 1) playerY--;
    if (GetAsyncKeyState(VK_DOWN) & 0x8000 && playerY < HEIGHT-2) playerY++;
    
    // Continuous firing when space is held
    if ((GetAsyncKeyState(VK_SPACE) & 0x8000) && bulletsCount < MAX_BULLETS) {
        // Find an inactive bullet
        for (int i = 0; i < MAX_BULLETS; i++) {
            if (!bulletActive[i]) {
                bulletActive[i] = true;
                bulletX[i] = playerX;
                bulletY[i] = playerY - 1;
                bulletsCount++;
                break;
            }
        }
    }
}

void enemyAI() {
    for (int i = 0; i < activeEnemies; i++) {
        if (enemyHealth[i] > 0) {
            // Random movement
            switch (rand() % 4) {
                case 0: if (enemyX[i] > 1) enemyX[i]--; break;
                case 1: if (enemyX[i] < WIDTH-2) enemyX[i]++; break;
                case 2: if (enemyY[i] > 1) enemyY[i]--; break;
                case 3: if (enemyY[i] < HEIGHT/2) enemyY[i]++; break;
            }
            
            // Random shooting
            if (rand() % 20 == 0 && !enemyBulletActive[i]) {
                enemyBulletActive[i] = true;
                enemyBulletX[i] = enemyX[i];
                enemyBulletY[i] = enemyY[i] + 1;
            }
        }
    }
}

void updateBullets() {
    // Player bullets
    for (int i = 0; i < MAX_BULLETS; i++) {
        if (bulletActive[i]) {
            bulletY[i]--;
            
            // Check for hits on enemies
            for (int j = 0; j < activeEnemies; j++) {
                if (enemyHealth[j] > 0 && bulletX[i] == enemyX[j] && bulletY[i] == enemyY[j]) {
                    enemyHealth[j] -= 10;
                    bulletActive[i] = false;
                    bulletsCount--;
                    break;
                }
            }
            
            // Check for border collision
            if (bulletY[i] <= 0) {
                bulletActive[i] = false;
                bulletsCount--;
            }
        }
    }
    
    // Enemy bullets
    for (int i = 0; i < activeEnemies; i++) {
        if (enemyBulletActive[i]) {
            enemyBulletY[i]++;
            if (enemyBulletX[i] == playerX && enemyBulletY[i] == playerY) {
                playerHealth -= 10;
                enemyBulletActive[i] = false;
            }
            else if (enemyBulletY[i] >= HEIGHT-1) {
                enemyBulletActive[i] = false;
            }
        }
    }
}

void checkGameState() {
    if (playerHealth <= 0) {
        gameOver = true;
        return;
    }
    
    bool allDead = true;
    for (int i = 0; i < activeEnemies; i++) {
        if (enemyHealth[i] > 0) {
            allDead = false;
            break;
        }
    }
    
    if (allDead) {
        level++;
        if (level > 3) {
            gameOver = true;
            draw();
            gotoxy(WIDTH/2 - 5, HEIGHT/2);
            cout << "YOU WIN!";
            _getch();
        } else {
            setup();
        }
    }
}

int main() {
    // Set up console
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hOut, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(hOut, &cursorInfo);
    
    srand(time(0));
    setup();
    
    while (!gameOver) {
        draw();
        input();
        enemyAI();
        updateBullets();
        checkGameState();
        Sleep(50);  // Controls game speed and firing rate
    }
    
    if (playerHealth <= 0) {
        draw();
        gotoxy(WIDTH/2 - 5, HEIGHT/2);
        cout << "GAME OVER";
        _getch();
    }
    
    // Restore cursor
    cursorInfo.bVisible = true;
    SetConsoleCursorInfo(hOut, &cursorInfo);
    
    return 0;
}
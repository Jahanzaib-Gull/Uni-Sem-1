#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// --- Constants ---
const int PLAYER_WIDTH = 11;
const int PLAYER_HEIGHT = 3;
const int ENEMY_WIDTH = 10;
const int ENEMY_HEIGHT = 3;
const int BULLET_SPEED = 2;
const int BULLET_LIMIT = 50;
const int ENEMY_BULLET_LIMIT = 50; // Limit for enemy bullets
const int ENEMY_BULLET_SPEED = 2;

const int SCREEN_MAX_X = 165;
const int SCREEN_MAX_Y = 36;
const int SCREEN_MIN_Y = 3;
const int PLAYER_MOVE_STEP = 2;
const int ENEMY_COLLISION_DAMAGE = 5;
const int BULLET_DAMAGE = 20;       // Damage from player bullet to enemy
const int ENEMY_BULLET_DAMAGE = 10; // Damage from enemy bullet to player
const int SCORE_PILL = 10;
const int HEALTH_PILL = 20;
const int SCORE_ENEMY_DEFEATED = 50;
const int PLAYER_INITIAL_HEALTH = 100;

const int ENEMY_FIRE_RATE_1 = 50;
const int ENEMY_FIRE_RATE_2 = 70;
const int ENEMY_FIRE_RATE_3 = 60;

const int OBSTACLES = 4;
const int LEVELS = 3;

// player start positions
int playerStartX_levels[LEVELS] = {2, 5, 20}; // Player X for Level 1, 2, 3
int playerStartY_levels[LEVELS] = {1, 30, 2}; // Player Y for Level 1, 2, 3

// enemy start positions and health
int enemy1StartX_levels[LEVELS] = {155, 150, 140};
int enemy1StartY_levels[LEVELS] = {3, 5, 2};
int enemy1Health_levels[LEVELS] = {100, 120, 150};

int enemy2StartX_levels[LEVELS] = {145, 135, 130};
int enemy2StartY_levels[LEVELS] = {3, 25, 30};
int enemy2Health_levels[LEVELS] = {100, 120, 150};

int enemy3StartX_levels[LEVELS] = {140, 120, 110};
int enemy3StartY_levels[LEVELS] = {9, 15, 10};
int enemy3Health_levels[LEVELS] = {100, 130, 180};

// pill positions
int pillStartX_levels[LEVELS] = {32, 70, 100};
int pillStartY_levels[LEVELS] = {10, 20, 5};

// obstacles configuration for each level
int obstacleX_levels[LEVELS][OBSTACLES] = {
    {8, 50, 103, 90},
    {20, 70, 115, 5},
    {5, 40, 80, 120}};
int obstacleY_levels[LEVELS][OBSTACLES] = {
    {27, 15, 25, 10},
    {10, 30, 18, 5},
    {5, 20, 10, 25}};
int obstacleWidth_levels[LEVELS][OBSTACLES] = {
    {8, 8, 7, 35},
    {10, 10, 8, 40},
    {12, 10, 9, 10}};
int obstacleHeight_levels[LEVELS][OBSTACLES] = {
    {6, 6, 6, 3},
    {5, 5, 5, 3},
    {7, 7, 7, 7}};

// fire rates
int enemyFireRate1_levels[LEVELS] = {-5, -15, -30};
int enemyFireRate2_levels[LEVELS] = {-5, -15, -30};
int enemyFireRate3_levels[LEVELS] = {-5, -10, -25};

// Player
int pX, pY;
int health = PLAYER_INITIAL_HEALTH;
int score = 0;
int currentLevel = 0;

// Enemies
int eX, eY;
int eX2, eY2;
int eX3, eY3;

int enemy1Health;
int enemy2Health;
int enemy3Health;

int enemydirection = 1;    // For enemy1 (vertical)
int enemy2direction = 1;   // For enemy2 (horizontal)
int enemy3directionX = -4; // For enemy3 (diagonal)
int enemy3directionY = 1;  // For enemy3 (diagonal)

bool enemy1Defeated = false;
bool enemy2Defeated = false;
bool enemy3Defeated = false;

// Player Bullets
int bulletX[BULLET_LIMIT];
int bulletY[BULLET_LIMIT];
bool bulletActive[BULLET_LIMIT];

// Enemy Bullets
int enemyBulletX[ENEMY_BULLET_LIMIT];
int enemyBulletY[ENEMY_BULLET_LIMIT];
bool enemyBulletActive[ENEMY_BULLET_LIMIT];
int enemyBulletSource[ENEMY_BULLET_LIMIT];

int pillX, pillY;
bool pillCollected = false;

int obstacleX[OBSTACLES];
int obstacleY[OBSTACLES];
int obstacleWidth[OBSTACLES];
int obstacleHeight[OBSTACLES];

int highScore = 0;
const string HIGHSCORE_FILE = "highscore.txt";

// --- Function Prototypes ---
void setColor(int color);
void gotoxy(int x, int y);
void hideCursor();
void tankArt();
void header();
string displayMenu();
void displayInformation();
void resetGame();
void resetLevel(int levelIdx); // to set up a specific level
// Maze and Obstacle Functions
void drawBoundaryMaze();
void drawSingleObstacle(int x, int y, int width, int height);
void drawAllObstacles();
// Player Functions
void printPlayer();
void erasePlayer();
void movePlayer(int playerX, int playerY);
void firePlayerBullet();
void movePlayerBullets();
void checkPlayerBulletCollisions();
// Enemy Functions
void printEnemy(int enemyNum);
void eraseEnemy(int enemyNum);
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
// Enemy Bullet Functions
void fireEnemyBullet(int enemyNum);
void moveEnemyBullets();
void checkEnemyBulletCollisions();
void printPill();
void checkGameInteractions();                                              // Handles pill collection, enemy collision with player, and score, health updates
bool isPlayerCollidingWithObstacle(int targetX, int targetY);              // Check for player obstacle collision
bool isEnemyCollidingWithObstacle(int enemyNum, int targetX, int targetY); // Check for enemy obstacle collision
bool isPlayerCollidingWithEnemy(int playerX, int playerY);     // Check for player enemy collision
bool isBulletCollidingWithObstacle(int bulletX, int bulletY); // Check bullet obstacle collision
// Game Over and Win Conditions
bool checkGameOver();
bool checkWinCondition();
// Game Over and Win Screens
void displayGameOverScreen();
void displayWinScreen();
void displayLevelCompleteScreen(int level);
// Game Loop
void runGameLoop();
void loadHighScore();
void saveHighScore();

// --- Main Function ---
int main()
{
    srand(time(0));
    hideCursor();  
    system("cls"); 

    loadHighScore(); 
    // Loading Screen
    for (int i = 0; i <= 100; i++)
    {
        tankArt();
        setColor(13);
        gotoxy(75, 23);
        cout << "LOADING GAME..... " << i << "%";
        Sleep(50);
        system("cls");
    }
    Sleep(100);

    header();

    string menuOption = displayMenu();
    while (menuOption != "3")
    {
        if (menuOption == "1")
        {
            resetGame(); 
            for (currentLevel = 0; currentLevel < LEVELS; ++currentLevel)
            {
                resetLevel(currentLevel); 
                drawBoundaryMaze();
                drawAllObstacles();
                printPlayer();
                printEnemy(1);
                printEnemy(2);
                printEnemy(3);
                printPill(); 

                runGameLoop(); // Play the level

                if (checkGameOver()) // Check if player health is zero
                {
                    system("cls");
                    drawBoundaryMaze();
                    displayGameOverScreen();
                    Sleep(3000);
                    break; 
                }
                else if (checkWinCondition() && currentLevel < LEVELS - 1)
                {
                    system("cls");
                    drawBoundaryMaze();
                    displayLevelCompleteScreen(currentLevel + 1); // Display level complete for next level
                    Sleep(3000);
                    system("cls"); 
                }
                else if (checkWinCondition() && currentLevel == LEVELS - 1)
                {
                    // Last level completed
                    system("cls");
                    drawBoundaryMaze();
                    displayWinScreen();
                    Sleep(3000);
                    break; 
                }
            }

            if (score > highScore)
            {
                highScore = score;
                saveHighScore();
            }

            system("cls");
            header();
            menuOption = displayMenu();
        }
        else if (menuOption == "2")
        {
            displayInformation();
            cout << "                          Press any key to return to the menu...";
            getch();
            system("cls");
            header();
            menuOption = displayMenu();
        }
        else
        {
            system("cls");
            header();
            setColor(4);
            gotoxy(70, 25);
            cout << "Invalid Option. Please choose 1, 2, or 3.";
            Sleep(1500);
            system("cls");
            header();
            menuOption = displayMenu();
        }
    }

    setColor(15);
    cout << " ----------------------------------GOOD BYE! YOU ARE EXITING THE GAME-------------------------" << endl;
    getch();
    return 0;
}

// --- Function Definitions ---
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void hideCursor()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}


void tankArt()
{
    cout << "\n\n";
    setColor(1);
    cout << "                                                                                         .:-.                       " << endl;
    cout << "                                                                                         :....                      " << endl;
    cout << "                                                                          .---------------::-:----                  " << endl;
    setColor(10);
    cout << "                                            .+-+--                       .-+-=++-+++=*+=+++=+=+++==                 " << endl;
    cout << "                                                                       ..=#:.   -#%%%#*+#####**##**=.               " << endl;
    setColor(14);
    cout << "                                .::-=====================================---.. ..:----::-----:---::-:.              " << endl;
    cout << "                                ......:.....::................::................:.....::.............:=========..   " << endl;
    setColor(10);
    cout << "                                                        ..    ..            ::::-                   .:=+**+--+*=.   " << endl;
    cout << "                                                     :=++*+=:.-+**+**-+#*=**=*#+-.:+**+=***+*++**++*+=.----::--=.   " << endl;
    cout << "                                               .:.:=======:-==--=====-=+======+-:=====--====:===================-.  " << endl;
    cout << "                                             .....................................................................  " << endl;
    cout << "                                             .-::::::::::-::::--::::-:::::-::::.:-::::-::::.-:::::--:::---:::..::   " << endl;
    cout << "                                              -:-------==+==++-=+==++-=+=-++-=:--=-::-=---=+*+*-:**-=+=-++:. :+=-   " << endl;
    cout << "                                                .:      .=*###*###*##*###*##*##.         ..:.-+--:-*::.-++*-::=+.-. " << endl;
    cout << "                                                ..-.:..:..::=---==-----=------=-:.:..:.:.:....:...:::...:.:.:....   " << endl;
    cout << "                                                  .=.:-.=.......................:=.--.=.-::-............ . ......   " << endl;
    cout << "                                                   -.........:--....:-:.:::.:..: :...........--::---::... ....      " << endl;
    cout << "                                                   .-.     :.-+=:...-=-.:--:     .:. .........-::  .::::            " << endl;
    cout << "                                                            ..::::.::::::.:       ..::::.::::::.:                   " << endl;
    cout << "                                                            ..::::.::::::.:       ..::::.::::::.:                   " << endl;
    cout << "\n\n";
}

void header()
{
    cout << "\n";
    setColor(12);
    cout << "                             =================================================================================================================" << endl;
    setColor(14);
    cout << "                            |        _______  _______  _______           _        ______     _______  _______  _______  _______              |" << endl;
    cout << "                            |       (  ____ \\(  ____ )(  ___  )|\\     /|( (    /|(  __  \\   / ___   )(  ____ \\(  ____ )(  ___  )             |" << endl;
    cout << "                            |       | (    \\/| (    )|| (   ) || )   ( ||  \\  ( || (  \\  )  \\/   )  || (    \\/| (    )|| (   ) |             |" << endl;
    cout << "                            |       | |      | (____)|| |   | || |   | ||   \\ | || |   ) |      /   )| (__    | (____)|| |   | |             |" << endl;
    cout << "                            |       | | ____ |     __)| |   | || |   | || (\\ \\) || |   | |     /   / |  __)   |     __)| |   | |             |" << endl;
    cout << "                            |       | | \\_  )| (\\ (   | |   | || |   | || | \\   || |   ) |    /   /  | (      | (\\ (   | |   | |             |" << endl;
    cout << "                            |       | (___) || ) \\ \\__| (___) || (___) || )  \\  || (__/  )   /   (_/\\| (____/\\| ) \\ \\__| (___) |             |" << endl;
    cout << "                            |       (_______)|/   \\__/(_______)(_______)|/    )_)(______/   (_______/(_______/|/   \\__/(_______)             |" << endl;
    setColor(12);
    cout << "                             =================================================================================================================" << endl;
    setColor(11);
    gotoxy(80, 12);
    cout << "HIGH SCORE: " << highScore << endl;
}

string displayMenu()
{
    cout << endl;
    setColor(3);
    cout << "                                                                                         WELCOME PLAYER " << endl;
    setColor(12);
    cout << "                                                                                         ___________________" << endl;
    setColor(3);
    cout << "                                                                                         1. START NEW GAME" << endl;
    setColor(12);
    cout << "                                                                                         ___________________" << endl;
    setColor(3);
    cout << "                                                                                         2. HOW TO PLAY?" << endl;
    setColor(12);
    cout << "                                                                                         ___________________" << endl;
    setColor(3);
    cout << "                                                                                         3. EXIT THE GAME" << endl;
    string option;
    setColor(12);
    cout << "                                                                                         ___________________" << endl;
    setColor(3);
    cout << "                                                                                         ENTER YOUR OPTION > ";
    cin >> option;
    return option;
}

void displayInformation()
{
    system("cls");
    header();
    cout << endl;
    setColor(10);
    cout << "                                                                                         HOW TO PLAY THE GAME" << endl;
    cout << "                                                   =========================================================================================" << endl;
    setColor(15);
    cout << endl;
    cout << "                                 Objective: Navigate through the maze, avoid enemies, and collect pills to boost your score and health." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Controls: " << endl;
    cout << "                                   - Arrow Keys: Move the player up, down, left, or right." << endl;
    cout << "                                   - SPACEBAR: Fire bullets to destroy enemies." << endl;
    cout << "                                   - Collect the '$' (pills) to boost health and score." << endl;
    cout << "                                   - Avoid enemy tanks and obstacles to survive." << endl;
    cout << "                                   - Enemies also fire bullets! Dodge them!" << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Enemy Types:" << endl;
    cout << "                                   - Enemy 1 (Yellow): Moves vertically. Avoid its path to prevent losing health." << endl;
    cout << "                                   - Enemy 2 (White): Moves horizontally. Be cautious as it changes direction frequently." << endl;
    cout << "                                   - Enemy 3 (Purple): A more advanced enemy with diagonal movement. Watch out for its unpredictable behavior." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Health: You start with " << PLAYER_INITIAL_HEALTH << " health. Avoid enemies to prevent health loss." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Levels: The game consists of " << LEVELS << " levels with increasing difficulty. Each level has different enemy types and obstacles." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Score: Collect pills and destroy enemies to increase your score." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Power-ups (Pills): Collect pills to boost your health by " << HEALTH_PILL << " points and score by " << SCORE_PILL << " points." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 Obstacles: Use them wisely to avoid enemy attacks." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
    setColor(15);
    cout << "                                 To exit the game, press '3' in the main menu." << endl;
    setColor(3);
    cout << "                                 _______________________________________________________________________________________________________" << endl;
}

void resetGame()
{
    health = PLAYER_INITIAL_HEALTH;
    score = 0;
    currentLevel = 0;
}

void resetLevel(int levelIdx)
{
    pX = playerStartX_levels[levelIdx];
    pY = playerStartY_levels[levelIdx];

    eX = enemy1StartX_levels[levelIdx];
    eY = enemy1StartY_levels[levelIdx];
    enemy1Health = enemy1Health_levels[levelIdx];

    eX2 = enemy2StartX_levels[levelIdx];
    eY2 = enemy2StartY_levels[levelIdx];
    enemy2Health = enemy2Health_levels[levelIdx];

    eX3 = enemy3StartX_levels[levelIdx];
    eY3 = enemy3StartY_levels[levelIdx];
    enemy3Health = enemy3Health_levels[levelIdx];

    // Reset enemy directions to default for new level
    enemydirection = 1;
    enemy2direction = 1;
    enemy3directionX = -4;
    enemy3directionY = 1;

    enemy1Defeated = false;
    enemy2Defeated = false;
    enemy3Defeated = false;

    pillX = pillStartX_levels[levelIdx];
    pillY = pillStartY_levels[levelIdx];
    pillCollected = false;

    // Set obstacles based on level config
    for (int i = 0; i < OBSTACLES; ++i)
    {
        obstacleX[i] = obstacleX_levels[levelIdx][i];
        obstacleY[i] = obstacleY_levels[levelIdx][i];
        obstacleWidth[i] = obstacleWidth_levels[levelIdx][i];
        obstacleHeight[i] = obstacleHeight_levels[levelIdx][i];
    }

    for (int i = 0; i < BULLET_LIMIT; ++i)
    {
        bulletActive[i] = false;
    }
    for (int i = 0; i < ENEMY_BULLET_LIMIT; ++i)
    {
        enemyBulletActive[i] = false;
    }
    system("cls"); // Clear screen for fresh level drawing
}

void drawBoundaryMaze()
{
    setColor(10); // Maze border color
    cout << "########################################################################################################################################################################" << endl;
    for (int i = 0; i < 36; i++)
    {
        cout << "#                                                                                                                                                                      #" << endl;
    }
    cout << "########################################################################################################################################################################" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "#                                                                                                                                                                      #" << endl;
    }
    cout << "########################################################################################################################################################################" << endl;
}

void drawSingleObstacle(int x, int y, int width, int height)
{
    setColor(12); // Obstacle color
    for (int i = 0; i < height; ++i)
    {
        gotoxy(x, y + i);
        for (int j = 0; j < width; ++j)
        {
            if (x == 90 && y == 10 && i == 1 && j > 0 && j < width - 1)
            {
                // Special case for the middle row of the obstacle
                cout << "#";
            }
            else if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                cout << "#"; // Border
            }
            else
            {
                cout << "*"; // Inside fill
            }
        }
    }
}

void drawAllObstacles()
{
    for (int i = 0; i < OBSTACLES; ++i)
    {
        drawSingleObstacle(obstacleX[i], obstacleY[i], obstacleWidth[i], obstacleHeight[i]);
    }
}

void printPlayer()
{
    setColor(1);
    gotoxy(pX, pY);
    cout << "  ###### ";
    gotoxy(pX, pY + 1);
    cout << "##########>";
    gotoxy(pX, pY + 2);
    cout << "  ######";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "           ";
    gotoxy(pX, pY + 1);
    cout << "           ";
    gotoxy(pX, pY + 2);
    cout << "           ";
}

void movePlayer(int playerX, int playerY)
{
    int newPX = pX + playerX;
    int newPY = pY + playerY;

    // Check boundary collisions
    if (newPX < 3)
    {
        newPX = 3;
    }
    if (newPX > SCREEN_MAX_X - PLAYER_WIDTH - 1)
    {
        newPX = SCREEN_MAX_X - PLAYER_WIDTH - 1;
    }
    if (newPY < SCREEN_MIN_Y)
    {
        newPY = SCREEN_MIN_Y;
    }
    if (newPY > SCREEN_MAX_Y - PLAYER_HEIGHT - 1)
    {
        newPY = SCREEN_MAX_Y - PLAYER_HEIGHT - 1;
    }

    // Check obstacle collisions
    if (isPlayerCollidingWithObstacle(newPX, newPY))
    {
        return;
    }

    // If no collision with boundaries or obstacles, update position
    erasePlayer();
    pX = newPX;
    pY = newPY;
    printPlayer();
}

void firePlayerBullet()
{
    for (int i = 0; i < BULLET_LIMIT; i++)
    {
        if (!bulletActive[i])
        {
            bulletX[i] = pX + 11; // Bullet starts at the end of the player tank barrel
            bulletY[i] = pY + 1;
            bulletActive[i] = true;
            break; // Fire one bullet and exit
        }
    }
}

void movePlayerBullets()
{
    setColor(6); // Bullet color
    for (int i = 0; i < BULLET_LIMIT; i++)
    {
        if (bulletActive[i])
        {
            gotoxy(bulletX[i], bulletY[i]);
            cout << " ";
            bulletX[i] += BULLET_SPEED; // Move bullet
            if (bulletX[i] >= SCREEN_MAX_X - 1 || bulletX[i] < 3 || isBulletCollidingWithObstacle(bulletX[i], bulletY[i]))
            {
                bulletActive[i] = false;
                continue; 
            }
            gotoxy(bulletX[i], bulletY[i]);
            cout << "O"; 
        }
    }
}

void checkPlayerBulletCollisions()
{
    for (int i = 0; i < BULLET_LIMIT; i++)
    {
        if (bulletActive[i])
        {
            // Check collision with Enemy 1
            if (enemy1Health > 0 &&
                bulletX[i] >= eX && bulletX[i] < eX + ENEMY_WIDTH &&
                bulletY[i] >= eY && bulletY[i] < eY + ENEMY_HEIGHT)
            {
                enemy1Health -= BULLET_DAMAGE;
                bulletActive[i] = false; // Deactivate bullet on hit
                gotoxy(bulletX[i], bulletY[i]);
                cout << " "; // Erase bullet
                score += (BULLET_DAMAGE / 10);
                if (enemy1Health <= 0 && !enemy1Defeated)
                {
                    score += SCORE_ENEMY_DEFEATED;
                    health += HEALTH_PILL;
                    enemy1Defeated = true;
                    eraseEnemy(1);
                }
            }
            // Check collision with Enemy 2
            if (enemy2Health > 0 &&
                bulletX[i] >= eX2 && bulletX[i] < eX2 + ENEMY_WIDTH &&
                bulletY[i] >= eY2 && bulletY[i] < eY2 + ENEMY_HEIGHT)
            {
                enemy2Health -= BULLET_DAMAGE;
                bulletActive[i] = false; // Deactivate bullet on hit
                gotoxy(bulletX[i], bulletY[i]);
                cout << " "; // Erase bullet
                score += (BULLET_DAMAGE / 10);
                if (enemy2Health <= 0 && !enemy2Defeated)
                {
                    score += SCORE_ENEMY_DEFEATED;
                    health += HEALTH_PILL;
                    enemy2Defeated = true;
                    eraseEnemy(2);
                }
            }
            // Check collision with Enemy 3
            if (enemy3Health > 0 &&
                bulletX[i] >= eX3 && bulletX[i] < eX3 + ENEMY_WIDTH &&
                bulletY[i] >= eY3 && bulletY[i] < eY3 + ENEMY_HEIGHT)
            {
                enemy3Health -= BULLET_DAMAGE;
                bulletActive[i] = false; // Deactivate bullet on hit
                gotoxy(bulletX[i], bulletY[i]);
                cout << " "; // Erase bullet
                score += (BULLET_DAMAGE / 10);
                if (enemy3Health <= 0 && !enemy3Defeated)
                {
                    score += SCORE_ENEMY_DEFEATED;
                    health += HEALTH_PILL;
                    enemy3Defeated = true;
                    eraseEnemy(3);
                }
            }
        }
    }
}

void printEnemy(int enemyNum)
{
    if (enemyNum == 1 && enemy1Health > 0)
    {
        setColor(14); // Yellow for Enemy 1
        gotoxy(eX, eY);
        cout << "  ***** ";
        gotoxy(eX, eY + 1);
        cout << " <********";
        gotoxy(eX, eY + 2);
        cout << "  ***** ";
    }
    else if (enemyNum == 2 && enemy2Health > 0)
    {
        setColor(7); // White for Enemy 2
        gotoxy(eX2, eY2);
        cout << "  ------  ";
        gotoxy(eX2, eY2 + 1);
        cout << "<---------";
        gotoxy(eX2, eY2 + 2);
        cout << "  ------  ";
    }
    else if (enemyNum == 3 && enemy3Health > 0)
    {
        setColor(13); // Purple for Enemy 3
        gotoxy(eX3, eY3);
        cout << "  ~~~~~   ";
        gotoxy(eX3 - 1, eY3 + 1);
        cout << "<~~~~~~~~";
        gotoxy(eX3 - 2, eY3 + 2);
        cout << "    ~~~~~   ";
    }
}

void eraseEnemy(int enemyNum)
{
    if (enemyNum == 1)
    {
        gotoxy(eX, eY);
        cout << "           ";
        gotoxy(eX, eY + 1);
        cout << "           ";
        gotoxy(eX, eY + 2);
        cout << "           ";
    }
    else if (enemyNum == 2)
    {
        gotoxy(eX2, eY2);
        cout << "           ";
        gotoxy(eX2, eY2 + 1);
        cout << "           ";
        gotoxy(eX2, eY2 + 2);
        cout << "           ";
    }
    else if (enemyNum == 3)
    {
        gotoxy(eX3, eY3);
        cout << "           ";
        gotoxy(eX3 - 1, eY3 + 1);
        cout << "           ";
        gotoxy(eX3 - 2, eY3 + 2);
        cout << "             ";
    }
}

void moveEnemy1()
{
    if (enemy1Health > 0)
    {
        eraseEnemy(1);
        int newEY = eY + enemydirection;

        // Boundary check
        if (newEY >= SCREEN_MAX_Y - ENEMY_HEIGHT - 1 || newEY <= SCREEN_MIN_Y)
        {
            enemydirection *= -1; // Reverse direction

            if (newEY >= SCREEN_MAX_Y - ENEMY_HEIGHT - 1)
                newEY = SCREEN_MAX_Y - ENEMY_HEIGHT - 1;
            if (newEY <= SCREEN_MIN_Y)
                newEY = SCREEN_MIN_Y;
        }

        // Obstacle check
        if (!isEnemyCollidingWithObstacle(1, eX, newEY))
        {
            eY = newEY;
        }
        else
        {
            enemydirection *= -1; // Reverse direction if hitting obstacle
        }
        printEnemy(1);
    }
}

void moveEnemy2()
{
    if (enemy2Health > 0)
    {
        eraseEnemy(2);
        int newEX2 = eX2 + enemy2direction;

        // Boundary check
        if (newEX2 <= 3 || newEX2 >= SCREEN_MAX_X - ENEMY_WIDTH - 1)
        {
            enemy2direction *= -1; // Reverse direction

            if (newEX2 <= 3)
                newEX2 = 3;
            if (newEX2 >= SCREEN_MAX_X - ENEMY_WIDTH - 1)
                newEX2 = SCREEN_MAX_X - ENEMY_WIDTH - 1;
        }

        // Obstacle check
        if (!isEnemyCollidingWithObstacle(2, newEX2, eY2))
        {
            eX2 = newEX2;
        }
        else
        {
            enemy2direction *= -1;
        }
        printEnemy(2);
    }
}

void moveEnemy3()
{
    if (enemy3Health > 0)
    {
        eraseEnemy(3);
        int newEX3 = eX3 - enemy3directionX; // Notice it is minus enemy3directionX for diagonal movement
        int newEY3 = eY3 + enemy3directionY;

        int originalDirectionX = enemy3directionX;
        int originalDirectionY = enemy3directionY;

        bool collidedWithBoundaryX = false;
        bool collidedWithBoundaryY = false;

        // Boundary check
        if (newEY3 >= SCREEN_MAX_Y - ENEMY_HEIGHT - 1)
        {
            newEY3 = SCREEN_MAX_Y - ENEMY_HEIGHT - 1;
            enemy3directionY *= -1;
            collidedWithBoundaryY = true;
        }
        else if (newEY3 <= SCREEN_MIN_Y)
        {
            newEY3 = SCREEN_MIN_Y;
            enemy3directionY *= -1;
            collidedWithBoundaryY = true;
        }

        // Boundary check
        if (newEX3 >= SCREEN_MAX_X - ENEMY_WIDTH - 1)
        {
            newEX3 = SCREEN_MAX_X - ENEMY_WIDTH - 1;
            enemy3directionX *= -1;
            collidedWithBoundaryX = true;
        }
        else if (newEX3 <= 3)
        {
            newEX3 = 3;
            enemy3directionX *= -1;
            collidedWithBoundaryX = true;
        }

        // Obstacle collision check for the new position
        if (isEnemyCollidingWithObstacle(3, newEX3, newEY3))
        {
            // If colliding with an obstacle, reverse both directions
            enemy3directionX = originalDirectionX * -1;
            enemy3directionY = originalDirectionY * -1;
        }
        else
        {
            eX3 = newEX3;
            eY3 = newEY3;
        }
        printEnemy(3);
    }
}

// --- Enemy Bullet Functions ---
void fireEnemyBullet(int enemyNum)
{
    int currentEnemyX, currentEnemyY;
    if (enemyNum == 1 && enemy1Health > 0)
    {
        currentEnemyX = eX;
        currentEnemyY = eY;
    }
    else if (enemyNum == 2 && enemy2Health > 0)
    {
        currentEnemyX = eX2;
        currentEnemyY = eY2;
    }
    else if (enemyNum == 3 && enemy3Health > 0)
    {
        currentEnemyX = eX3;
        currentEnemyY = eY3;
    }
    else
    {
        return; // Enemy is defeated
    }

    for (int i = 0; i < ENEMY_BULLET_LIMIT; i++)
    {
        if (!enemyBulletActive[i])
        {
            enemyBulletX[i] = currentEnemyX - 1; // Bullet starts
            enemyBulletY[i] = currentEnemyY + 1;
            enemyBulletActive[i] = true;
            enemyBulletSource[i] = enemyNum; // Mark which enemy fired it
            break;
        }
    }
}

void moveEnemyBullets()
{
    setColor(4); // Red for enemy bullets
    for (int i = 0; i < ENEMY_BULLET_LIMIT; i++)
    {
        if (enemyBulletActive[i])
        {
            gotoxy(enemyBulletX[i], enemyBulletY[i]);
            cout << " "; // Erase old bullet position

            enemyBulletX[i] -= ENEMY_BULLET_SPEED; // Move bullet left

            if (enemyBulletX[i] < 3 || enemyBulletX[i] >= SCREEN_MAX_X - 1 || isBulletCollidingWithObstacle(enemyBulletX[i], enemyBulletY[i]))
            {
                enemyBulletActive[i] = false;
                continue;
            }
            gotoxy(enemyBulletX[i], enemyBulletY[i]);
            cout << "o"; // Draw new bullet position
        }
    }
}

void checkEnemyBulletCollisions()
{
    for (int i = 0; i < ENEMY_BULLET_LIMIT; i++)
    {
        if (enemyBulletActive[i])
        {
            // Check collision with player
            if (enemyBulletX[i] >= pX && enemyBulletX[i] < pX + PLAYER_WIDTH &&
                enemyBulletY[i] >= pY && enemyBulletY[i] < pY + PLAYER_HEIGHT)
            {
                health -= ENEMY_BULLET_DAMAGE;
                enemyBulletActive[i] = false; // Deactivate bullet on hit
                gotoxy(enemyBulletX[i], enemyBulletY[i]);
                cout << " ";
            }
        }
    }
}

// --- Pill Functions ---
void printPill()
{
    if (!pillCollected)
    {
        setColor(3); // Pill color
        gotoxy(pillX, pillY);
        cout << "$";
    }
    else
    {
        // Erase pill if collected
        gotoxy(pillX, pillY);
        cout << " ";
    }
}

// --- Collision Detection Functions ---
bool isPlayerCollidingWithObstacle(int targetX, int targetY)
{
    for (int i = 0; i < OBSTACLES; i++)
    {

        if (targetX < obstacleX[i] + obstacleWidth[i] &&
            targetX + PLAYER_WIDTH > obstacleX[i] &&
            targetY < obstacleY[i] + obstacleHeight[i] &&
            targetY + PLAYER_HEIGHT > obstacleY[i])
        {
            return true;
        }
    }
    return false;
}

bool isEnemyCollidingWithObstacle(int enemyNum, int targetX, int targetY)
{
    int currentEnemyWidth = ENEMY_WIDTH; // All enemies use same approximate width/height for collision
    int currentEnemyHeight = ENEMY_HEIGHT;

    for (int i = 0; i < OBSTACLES; i++)
    {
        if (targetX < obstacleX[i] + obstacleWidth[i] &&
            targetX + currentEnemyWidth > obstacleX[i] &&
            targetY < obstacleY[i] + obstacleHeight[i] &&
            targetY + currentEnemyHeight > obstacleY[i])
        {
            return true;
        }
    }
    return false;
}

bool isPlayerCollidingWithEnemy(int playerX, int playerY)
{
    // Check collision with Enemy 1
    if (enemy1Health > 0 &&
        playerX + PLAYER_WIDTH > eX && playerX < eX + ENEMY_WIDTH &&
        playerY + PLAYER_HEIGHT > eY && playerY < eY + ENEMY_HEIGHT)
    {
        return true;
    }
    // Check collision with Enemy 2
    if (enemy2Health > 0 &&
        playerX + PLAYER_WIDTH > eX2 && playerX < eX2 + ENEMY_WIDTH &&
        playerY + PLAYER_HEIGHT > eY2 && playerY < eY2 + ENEMY_HEIGHT)
    {
        return true;
    }
    // Check collision with Enemy 3
    if (enemy3Health > 0 &&
        playerX + PLAYER_WIDTH > eX3 && playerX < eX3 + ENEMY_WIDTH &&
        playerY + PLAYER_HEIGHT > eY3 && playerY < eY3 + ENEMY_HEIGHT)
    {
        return true;
    }
    return false;
}

// Function to check if a bullet collides with an obstacle
bool isBulletCollidingWithObstacle(int bX, int bY)
{
    for (int i = 0; i < OBSTACLES; i++)
    {
        if (bX >= obstacleX[i] && bX < obstacleX[i] + obstacleWidth[i] &&
            bY >= obstacleY[i] && bY < obstacleY[i] + obstacleHeight[i])
        {
            return true;
        }
    }
    return false;
}

// --- Game State Update ---
void checkGameInteractions()
{
    // Display Score and Health
    int hudX = 6, hudY = 39; // Position for HUD

    if (!pillCollected &&
        pX < pillX + 1 &&
        pX + PLAYER_WIDTH > pillX &&
        pY < pillY + 1 &&
        pY + PLAYER_HEIGHT > pillY)
    {
        pillCollected = true;
        score += SCORE_PILL;
        health += HEALTH_PILL;
    }

    // from CHATGPT Check for Player-Enemy Collision
    static DWORD lastPlayerCollisionTime = 0;
    DWORD currentTime = GetTickCount();
    const DWORD COLLISION_COOLDOWN = 500;

    if (isPlayerCollidingWithEnemy(pX, pY) && (currentTime - lastPlayerCollisionTime > COLLISION_COOLDOWN))
    {
        health -= ENEMY_COLLISION_DAMAGE;
        score -= SCORE_PILL;
        if (score < 0)
            score = 0;
        lastPlayerCollisionTime = currentTime;
    }

    if (health < 0)
        health = 0;
    if (score < 0)
        score = 0;

    setColor(6);
    gotoxy(hudX, hudY);
    cout << "PLAYER SCORE: " << score << "      ";
    gotoxy(hudX, hudY + 2);
    cout << "PLAYER HEALTH: " << health << "     ";
    gotoxy(hudX + 50, hudY);
    setColor(11);
    cout << "LEVEL: " << currentLevel + 1 << " / " << LEVELS << "   ";
}

bool checkGameOver()
{

    return health <= 0;
}

bool checkWinCondition()
{
    return enemy1Health <= 0 && enemy2Health <= 0 && enemy3Health <= 0;
}

void displayGameOverScreen()
{
    int Ox = 55, Oy = 16;
    gotoxy(Ox, Oy);
    setColor(12);
    cout << "   ______                        ____                  __" << endl;
    gotoxy(Ox, Oy + 1);
    cout << "  / ____/___ _____ ___  ___     / __ \\_   _____  _____/ /" << endl;
    gotoxy(Ox, Oy + 2);
    cout << " / / __/ __ `/ __ `__ \\/ _ \\   / / / / | / / _ \\/ ___/ / " << endl;
    gotoxy(Ox, Oy + 3);
    cout << "/ /_/ / /_/ / / / / / /  __/  / /_/ /| |/ /  __/ /  /_/  " << endl;
    gotoxy(Ox, Oy + 4);
    cout << "\\____/\\__,_/_/ /_/ /_/\\___/   \\____/ |___/\\___/_/  (_)   " << endl;
}

void displayWinScreen()
{
    int Wx = 55, Wy = 16;
    setColor(14);
    cout << endl;
    gotoxy(Wx, Wy);
    cout << " __   __  _______  __   __    _     _  ___   __    _  __  " << endl;
    gotoxy(Wx, Wy + 1);
    cout << "|  | |  ||       ||  | |  |  | | _ | ||   | |  |  | ||  | " << endl;
    gotoxy(Wx, Wy + 2);
    cout << "|  |_|  ||   _   ||  | |  |  | || || ||   | |   |_| ||  | " << endl;
    gotoxy(Wx, Wy + 3);
    cout << "|       ||  | |  ||  |_|  |  |       ||   | |       ||  | " << endl;
    gotoxy(Wx, Wy + 4);
    cout << "|_     _||  |_|  ||       |  |       ||   | |  _    ||__| " << endl;
    gotoxy(Wx, Wy + 5);
    cout << "  |   |  |       ||       |  |   _   ||   | | | |   | __  " << endl;
    gotoxy(Wx, Wy + 6);
    cout << "  |___|  |_______||_______|  |__| |__||___| |_|  |__||__| " << endl;
}

void displayLevelCompleteScreen(int level)
{
    int Cx = 55, Cy = 16;
    setColor(10);
    gotoxy(Cx, Cy);
    cout << "  _      ____  _____ _____ __    ___  _   _ _____ _____ " << endl;
    gotoxy(Cx, Cy + 1);
    cout << " | |    / __ \\|  __ \\_   _|\\ \\  / / \\| | | |_   _|/ ____|" << endl;
    gotoxy(Cx, Cy + 2);
    cout << " | |   | |  | | |__) || |   \\ \\/ /|  \\| | | | | | | (___  " << endl;
    gotoxy(Cx, Cy + 3);
    cout << " | |   | |  | |  _  / | |    >  < | . ` | | | | |  \\___ \\ " << endl;
    gotoxy(Cx, Cy + 4);
    cout << " | |___| |__| | | \\ \\_| |_  / /\\ \\| |\\  | |_| |_|  ____) |" << endl;
    gotoxy(Cx, Cy + 5);
    cout << " |______\\____/|_|  \\_\\____|/_/  \\_\\_| \\_|\\___/|_____|____/ " << endl;
    gotoxy(Cx + 10, Cy + 8);
    setColor(15);
    cout << "CONGRATULATIONS! LEVEL " << level << " COMPLETED!" << endl;
    gotoxy(Cx + 10, Cy + 9);
    cout << "PREPARING FOR LEVEL " << level + 1 << "..." << endl;
}

// --- Main Game Loop Function ---
void runGameLoop()
{

    int enemy1FireCounter = 0;
    int enemy2FireCounter = 0;
    int enemy3FireCounter = 0;

    int enemy1FireRate = ENEMY_FIRE_RATE_1 + enemyFireRate1_levels[currentLevel] + (rand() % 10 - 5);
    int enemy2FireRate = ENEMY_FIRE_RATE_2 + enemyFireRate2_levels[currentLevel] + (rand() % 10 - 5);
    int enemy3FireRate = ENEMY_FIRE_RATE_3 + enemyFireRate3_levels[currentLevel] + (rand() % 10 - 5);

    if (enemy1FireRate < 10)
        enemy1FireRate = 10;
    if (enemy2FireRate < 10)
        enemy2FireRate = 10;
    if (enemy3FireRate < 10)
        enemy3FireRate = 10;

    while (true)
    {
        // 1. Input Handling
        if (GetAsyncKeyState(VK_UP))
        {
            movePlayer(0, -PLAYER_MOVE_STEP);
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayer(0, PLAYER_MOVE_STEP);
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayer(-PLAYER_MOVE_STEP, 0);
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayer(PLAYER_MOVE_STEP, 0);
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            firePlayerBullet();
        }

        movePlayerBullets();
        checkPlayerBulletCollisions();

        moveEnemy1();
        moveEnemy2();
        moveEnemy3();

        // Enemy Firing Logic
        if (enemy1Health > 0)
        {
            enemy1FireCounter++;
            if (enemy1FireCounter >= enemy1FireRate)
            {
                fireEnemyBullet(1);
                enemy1FireCounter = 0;
                // Recalculate for next shot
                enemy1FireRate = ENEMY_FIRE_RATE_1 + enemyFireRate1_levels[currentLevel] + (rand() % 10 - 5);
                if (enemy1FireRate < 10)
                    enemy1FireRate = 10;
            }
        }
        if (enemy2Health > 0)
        {
            enemy2FireCounter++;
            if (enemy2FireCounter >= enemy2FireRate)
            {
                fireEnemyBullet(2);
                enemy2FireCounter = 0;
                enemy2FireRate = ENEMY_FIRE_RATE_2 + enemyFireRate2_levels[currentLevel] + (rand() % 10 - 5);
                if (enemy2FireRate < 10)
                    enemy2FireRate = 10;
            }
        }
        if (enemy3Health > 0)
        {
            enemy3FireCounter++;
            if (enemy3FireCounter >= enemy3FireRate)
            {
                fireEnemyBullet(3);
                enemy3FireCounter = 0;
                enemy3FireRate = ENEMY_FIRE_RATE_3 + enemyFireRate3_levels[currentLevel] + (rand() % 10 - 5);
                if (enemy3FireRate < 10)
                    enemy3FireRate = 10;
            }
        }

        moveEnemyBullets();
        checkEnemyBulletCollisions();

        printPill();
        checkGameInteractions();

        Sleep(50);

        if (checkGameOver())
        {
            break;
        }
        if (checkWinCondition())
        {
            break;
        }
    }
}

void loadHighScore()
{
    ifstream inFile(HIGHSCORE_FILE);
    if (inFile.is_open())
    {
        inFile >> highScore;
        inFile.close();
    }
    else
    {
        highScore = 0;
    }
}

void saveHighScore()
{
    ofstream outFile(HIGHSCORE_FILE);
    outFile << highScore;
    outFile.close();
}
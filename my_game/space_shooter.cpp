#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

char game_menu();
void separation();
void gotoxy(int x, int y);
void hideCursor();


int main(){
    
}

char game_menu(){
    cout<<"welcome to the game menu!"<<endl;
    cout<<"Please choose an option:"<<endl;
    separation();
    cout<<"1. Start Game"<<endl;
    cout<<"2. Game Instructions"<<endl;
    cout<<"3. View high score"<<endl;
    cout<<"4. Exit"<<endl;
    separation();
    cout<<"Your choice: ";
    char choice;
    cin>>choice;
    return choice;
}

void separation(){
    cout<<"--------------------------------------"<<endl;
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
    GetConsoleCursorInfo(hConsole, &cursorInfo); // Get current cursor settings
    cursorInfo.bVisible = FALSE;                 // Set cursor visibility to false
    SetConsoleCursorInfo(hConsole, &cursorInfo); // Apply the new settings
}








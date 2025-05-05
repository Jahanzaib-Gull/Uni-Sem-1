#include <iostream>
#include <windows.h>

using namespace std;

void gotoxxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
    system("cls");
    cout << "test";
    gotoxxy(15, 15);
    cout << "My name is Jahanzaib." << endl;
}
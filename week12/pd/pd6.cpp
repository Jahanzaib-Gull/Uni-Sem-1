#include<iostream>
#include<windows.h>
using namespace std;

void printZ(){
    cout<<endl;
    cout << "ZZZZZZ" << endl;
    cout << "    Z " << endl;
    cout << "   Z  " << endl;
    cout << "  Z   " << endl;
    cout << " Z    " << endl;
    cout << "ZZZZZZ" << endl;
    cout<<endl;
}

void printA(){
    cout << endl;
    cout << "  A  " << endl;
    cout << " A A " << endl;
    cout << "AAAAA" << endl;
    cout << "A   A" << endl;
    cout << "A   A" << endl;
    cout << "A   A" << endl;
    cout<<endl;
}

void printB(){
    cout << "BBBBB" << endl;
    cout << "B   B" << endl;
    cout << "BBBBB" << endl;
    cout << "B   B" << endl;
    cout << "BBBBB" << endl;
    cout<<endl;
}

void printI(){
    cout << "IIIII" << endl;
    cout << "  I  " << endl;
    cout << "  I  " << endl;
    cout << "  I  " << endl;
    cout << "IIIII" << endl;
    cout<<endl;
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main(){
    int x = 36, y = 0;
    gotoxy(x, y);
    printZ();
    Sleep(1000);
    gotoxy(x,y+8);
    printA();
    Sleep(1000);
    gotoxy(x,y+16);
    printI();
    Sleep(1000);
    gotoxy(x,y+24);
    printB();
    Sleep(1000);
    gotoxy(0, y+32);
}
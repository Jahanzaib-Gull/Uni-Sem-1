#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

const int TOTAL_USERS = 10;
string usernames[TOTAL_USERS], passwords[TOTAL_USERS], roles[TOTAL_USERS], uniqueId[TOTAL_USERS];
int userCount = 0;

string choice;

void clearScreen();
void printHeader();
string landingPage();
void addUser(string role);
string signUp();
string signIn();
void loadData();
void saveData();

main() {
    loadData();
    while (true) {
        choice = landingPage();
        if (choice == "1") {
            string x = signIn();
            if (x != "!") {
                cout << endl << "Welcome " << x << ". Press any key to continue...";
                getch();
            }
            else {
                cout << endl << "Wrong Information! Press any key to continue...";
                getch();
            }
        }
        else if (choice == "2") {
            while (true) {
                choice = signUp();
                if (choice == "1") {
                    addUser("ADMIN");
                }
                else if (choice == "2") {
                    addUser("CUSTOMMER");
                }
                else if (choice == "3") {
                    break;
                }
                else {
                    cout << endl << "Invalid Choice! Press any key to try again...";
                    getch();
                }
            }
        }
        else if (choice == "3") {
            saveData();
            break;
        }
        else {
            cout << endl << "Invalid Choice! Press any key to try again...";
            getch();
        }
    }
}

void printHeader() {
    cout << "*******************************************************************" << endl << 
            "*                      Bussiness Application                      *" << endl <<
            "*******************************************************************" << endl;
}

string landingPage() {
    clearScreen();
    printHeader();
    cout << endl << "1. Sign In" << endl <<
                    "2. Sign Up" << endl << 
                    "3. Exit" << endl <<
                    "Enter your choice: ";
    cin >> choice;
    return choice;
}

string signUp() {
    clearScreen();
    printHeader();
    cout << endl << "1. As an Admin." << endl << 
                    "2. As a custommer." << endl <<
                    "3. Go back." << endl << endl <<
                    "Enter your choice: ";
    cin >> choice;
    return choice;
}

void addUser(string role) {
    clearScreen();
    printHeader();
    if (userCount == 10) {
        cout << endl << "Max User Limit reached! Press any key to continue...";
        getch();
        return;   
    }
    cout << endl << "Enter your Username: ";
    cin >> usernames[userCount];
    cout << "Enter Password: ";
    cin >> passwords[userCount];
    roles[userCount] = role;
    uniqueId[userCount] = to_string(userCount);
    cout << "Admin Added: " << usernames[userCount] << endl<<
            "Your unique ID is " << userCount << ". Press any key to continue...";
    getch();
    userCount++;
}

string signIn() {
    string username, password, id;
    clearScreen();
    printHeader();
    cout << endl << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    cout << "Enter the unique Id assigned to you at Sign Up: ";
    cin >> id;
    for (int i = 0; i <= userCount; i++) {
        if (usernames[i] == username && passwords[i] == password && uniqueId[i] == id) {
            return username;
        }
    }
    return "!";
}

void clearScreen() {
    system("cls");
}

void loadData() {
    fstream file;
    file.open("users.txt", ios::in);
    if (!file) return;
    string record;
    string userCount_s;
    getline(file, userCount_s);
    userCount = stoi(userCount_s);
    while (!file.eof()) {
        for (int i = 0; i < userCount; i++) {
            file >> usernames[i];
            file >> passwords[i];
            file >> roles[i];
            file >> uniqueId[i];
        } 
    }
    file.close();
}

void saveData() {
    fstream file;
    file.open("users.txt", ios::out);
    file << userCount << "\n";
    for (int i = 0; i < userCount; i++) {
        file << usernames[i] << " " << passwords[i] << " " << roles[i] << " " << uniqueId[i];
        if (i != userCount-1) file << "\n";
    }
}
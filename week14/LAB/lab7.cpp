#include <iostream>
#include <fstream>

using namespace std;

void displaywords(string filename);


main()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;
    displaywords(filename);
}

void displaywords(string filename)
{
    fstream file;
    file.open(filename, ios::in);
    string line;
    while (!file.eof())
    {
        file >> line;
        if(line.length() <4)
        {
            cout << line << " ";
        }
    }
    file.close();
}
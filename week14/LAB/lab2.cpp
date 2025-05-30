#include <iostream>
#include <fstream>

using namespace std;

int count_characters(string filename);
main()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    int characters = count_characters(filename);
    cout << "The number of characters in the file is: " << characters << endl;
}

int count_characters(string filename)
{
    fstream file;
    file.open(filename, ios::in);
    int count = 0;
    string line;
    while (!file.eof())
    {
        getline(file, line);
        count += line.length();
    }
    file.close();
    return count;
}
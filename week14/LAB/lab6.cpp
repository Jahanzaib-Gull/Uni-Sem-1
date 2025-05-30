#include <iostream>
#include <fstream>

using namespace std;

int count_lines(string filename);

main()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    int frequency = count_lines(filename);
    cout << "The number of lines: " << frequency << endl;
}

int count_lines(string filename)
{
    fstream file;
    file.open(filename, ios::in);
    int count = 0;
    char ch;
    file >> ch;
    string line;
    while (!file.eof())
    {
        getline(file, line);

        if (line[0] != ch)
        {
            count++;
        }
    }
    file.close();
    return count;
}
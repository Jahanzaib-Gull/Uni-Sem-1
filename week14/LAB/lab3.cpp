#include <iostream>
#include <fstream>

using namespace std;

int calculate_frequency(string filename);

main()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    int frequency = calculate_frequency(filename);
    cout << "The frequency of characters in the file is: " << frequency << endl;
}

int calculate_frequency(string filename)
{
    fstream file;
    file.open(filename, ios::in);
    char ch;
    file >> ch;
    string line;
    int count = 0;
    while (!file.eof())
    {
        getline(file, line);
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ch || line[i] == ch + 32 || line[i] == ch - 32)
            {
                count++;
            }
           
        }
    }
    file.close();
    return count;
}
#include<iostream>
#include<fstream>

using namespace std;

int countlines(string filename);

main(){
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    int lines = countlines(filename);
    cout << "The number of lines in the file is: " << lines << endl;
}

int countlines(string filename){
    fstream file;
    file.open(filename, ios::in);
    int count = 0;
    string line;    
    while (!file.eof())
    {
        getline(file, line);
        count++;
    }
    file.close();
    return count;
}
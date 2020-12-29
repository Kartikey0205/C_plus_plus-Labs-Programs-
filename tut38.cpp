//WAP to  write in a file and read it also by using open() function
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{

    ofstream writing_file;
    writing_file.open("name.txt");
    writing_file << "This is me \n";
    writing_file << "This is also me \n";

    writing_file.close();

    ifstream reading_File;
    string read;
    reading_File.open("name.txt");
    while (reading_File.eof() == 0)
    {
        getline(reading_File, read);
        cout << read;
    }
    reading_File.close();
    return 0;
}
/*
OUTPUT:
This is me This is also me
*/
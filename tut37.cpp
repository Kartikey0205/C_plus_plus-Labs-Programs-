//WAP to  write in a file and read it also by using constructor
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    string st = "Kartikey";
    //opening file using constructor and writing in it
    ofstream out("name1.txt");
    out << st;

    string st2;
    //opening file using constructor and reading in it
    ifstream in("name2.txt");
    // in>>st2;
    getline(in, st2);
    cout << st2;
    return 0;
}

/*
OUTPUT:
Reading File from getline function
*/
//WAP to Demonstrate reading and writing a text file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char text[200];
    fstream file;
    file.open("x.txt", ios::out | ios::in);
    cout << "Write text to be written in the file" << endl;
    cin.getline(text, sizeof(text));

    //Writing in file
    file << text << endl;
    //Reading from file
    file >> text;
    cout << text << endl;
    //Closing the file
    file.close();
    return 0;
}

// OUTPUT
// Write text to be written in the file
// People LOVES  SWEET LIARS than RUDE TRUTH , It's Okay !! :) Go Ahead and you also become SWEET LIARS , Enjoy , Hahhahahaaaa        
// People LOVES  SWEET LIARS than RUDE TRUTH , It's Okay !! :) Go Ahead and you also become SWEET LIARS , Enjoy , Hahhahahaaaa   
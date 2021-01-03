//WAP to explain Maps in STL in C++
#include <iostream>
#include <map>
#include <string>
//map is basically a key - value pair
using namespace std;
int main()
{
    map<string, int> Student_Marks;
    Student_Marks["Kartikey"] = 99;
    Student_Marks["Vanya"] = 100;
    Student_Marks["Alankrita"] = 98;
    map<string, int>::iterator iter;
    Student_Marks.insert({{"Sambhavi", 89}, {"Divya", 95}});
    for (iter = Student_Marks.begin(); iter != Student_Marks.end(); iter++)
    {
        cout << (*iter).first << " gots " << (*iter).second << endl;
    }
    cout << "Size of Map is " << Student_Marks.size() << endl;
    cout << "Max-size of Map is " << Student_Marks.max_size() << endl;
    cout << "Empty's Return value " << Student_Marks.empty() << endl;
    return 0;
}
/*
OUTPUT:
Alankrita gots 98
Divya gots 95
Kartikey gots 99
Sambhavi gots 89
Vanya gots 100
Size of Map is 5
Max-size of Map is 48806446
Empty's Return value 0
*/
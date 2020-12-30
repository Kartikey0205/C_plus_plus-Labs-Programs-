// WAP to show that templates of c++ can take multiple parameters and explain default parameter concept in it

#include <iostream>
using namespace std;
template <class T1, class T2, class T3 = float>
class myclass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;

    myclass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << this->data3;
    }
};
int main()
{
    myclass<int, char> sectionA(1, 'K', 6.8);
    cout << "Using default parameter concept with multiple parameter " << endl;

    sectionA.display();
    cout << endl;
    cout << endl;

    cout << "Changing default to any other data type " << endl;
    myclass<int, char, char> Kartikey(1, 'K', 'V');
    Kartikey.display();

    return 0;
}

/*OUTPUT:
Using default parameter concept with multiple parameter
1
K
6.8

Changing default to any other data type
1
K
V
*/
// WAP to implement constructor overloading using all type of constructors
#include <iostream>
using namespace std;
class showvalue
{
private:
    int a, b, c;

public:
    showvalue() //zero argument constructor
    {
        a = 0;
        b = 0;
        c = 0;
    }
    showvalue(int x, int y, int r) //parameterised constructor
    {
        a = x;
        b = y;
        c = r;
    }
    showvalue(int x, int y = 5) //default constructor
    {
        a = x;
        b = y;
        c = 0;
    }

    void printvalue()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    showvalue A, B(3, 4, 6),C(2,8);

    cout << "Value inside first object is " << endl;
    A.printvalue();
    cout << "Value inside second object is " << endl;

    B.printvalue();
    cout << "Value inside third object is " << endl;

    C.printvalue();

    return 0;
}
/*
OUTPUT:
Value inside first object is
a = 0
b = 0
c = 0
Value inside second object is
a = 3
b = 4
c = 6
Value inside third object is
a = 2
b = 8
c = 0
*/

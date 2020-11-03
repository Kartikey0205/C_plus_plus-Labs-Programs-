//WAP to show the working of default and parameterised constructors in inheritance.

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        cout << "Hello A\n";
    }
    A(int a1)
    {
        a = a1;
        cout << "Parameterize A " << a << endl;
    }
};
class B : public A
{
    int b;

public:
    B()
    {
        cout << "Hello B\n";
    }
    B(int b1) : A(b1)
    {
        b = b1;
        cout << "Parameterize B " << endl;
    }
};
int main()
{
    B b1(3);
    return 0;
}
// OUTPUT
// Parameterize A 3
// Parameterize B
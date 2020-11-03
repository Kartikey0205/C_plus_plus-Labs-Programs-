// WAP to show how constructor and destructor are invoked in the inheritance
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Hello A" << endl;
    }
    ~A()
    {
        cout << "Bye A" << endl;
    }
};
class B
{
public:
    B()
    {
        cout << "Hello B" << endl;
    }
    ~B()
    {
        cout << "Bye B" << endl;
    }
};
class C : public B, public A
{
public:
    C()
    {
        cout << "Hello C" << endl;
    }
    ~C()
    {
        cout << "Bye C" << endl;
    }
};
int main()
{
    C c1;
    return 0;
}

/*
OUTPUT:
Hello B
Hello A
Hello C
Bye C
Bye A
Bye B
*/
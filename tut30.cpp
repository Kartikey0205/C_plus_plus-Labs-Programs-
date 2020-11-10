// WAP to show the use of function overriding
#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Hello A" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Hello B" << endl;
    }
};

int main()
{
    B b1;
    b1.show();
    cout << "To ensure that Base class method is call from derived class is done by explicit call " << endl;
    b1.A::show();

    return 0;
}
/*
OUTPUT:
Hello B
To ensure that Base class method is call from derived class is done by explicit call
Hello A
*/
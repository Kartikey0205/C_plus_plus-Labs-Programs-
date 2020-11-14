// WAP to implement pure virtual function / Abstarct  class
#include <iostream>
using namespace std;
class A
{
public:
    virtual void show() = 0; //pure virtual class
};
class B : public A
{
public:
    void show()
    {
        cout << "Show method " << endl;
    }
};

int main()
{
    A *ptr;
    B b1;
    b1.show();
    return 0;
}
/*
OUTPUT:
Show method
*/
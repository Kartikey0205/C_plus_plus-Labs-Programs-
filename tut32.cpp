// WAP to implement dynamic  binding / virtual function
#include <iostream>
using namespace std;
class A
{
public:
    virtual void show() // virtual allows it for late binding
    {
        cout << "Show method from Parent class" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Show method from Child class" << endl;
    }
};

int main()
{
    A *ptr;
    B b1;
    ptr = &b1;   //It will run
    ptr->show(); //Static Binding (compilation  Time) -- > now it is lately perform
    return 0;
}
/*
OUTPUT:
Show method from Child class
*/
// WAP to implement static binding
#include <iostream>
using namespace std;
class A
{
public:
    void show()
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
    ptr = &b1;   //Its on run time
    ptr->show(); //Static Binding (compilation  Time)
    return 0;
}
/*
OUTPUT:
Show method from Parent class
*/
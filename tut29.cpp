// WAP to show the use of Hybrid Inheritance / virtual Base Class / Multipath / Diamond shape inheritance
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
class B : public virtual A
{
public:
    void showB()
    {
        cout << "Hello B" << endl;
    }
};
class C : virtual public A

{
public:
    void showC()
    {
        cout << "Hello C" << endl;
    }
};
class D : public B, public C
{
public:
    void showD()
    {
        cout << "Hello D" << endl;
    }
};
int main()
{
    D d1;
    d1.showD();
    cout << "After making virtual Base class " << endl;
    d1.show();
    return 0;
}
/*
OUTPUT:
Hello D
After making virtual Base class
Hello A
*/
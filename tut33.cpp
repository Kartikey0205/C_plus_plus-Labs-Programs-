//WAP to implement virtual destructor
#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Constructing Base " << endl;
    }
    ~base()
    {
        cout << "Destructing Base " << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Constructing Derived " << endl;
    }
    virtual ~derived()
    {
        cout << "Destructing Derived " << endl;
    }
};

int main()
{
    derived *d = new derived();
    base *b = d;
    delete b;
    return 0;
}
/*
Output:
Constructing Base
Constructing Derived
Destructing Base
*/
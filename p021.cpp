//WAP to implement copy constructor
#include <iostream>
using namespace std;

class number
{
private:
    int a;

public:
    number()
    {
        a =0;
    }
    number(int num) // parametised constructor
    {
        a = num;
    }
    number(number &obj) //Copy Constructor
    {
        cout << "Copy Constructor is called here " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    number n1, n2(45) ;
    n1.display();
    n2.display();
    number n3 = n1;
    n3.display();

    return 0;
}

/*
OUTPUT:
The value of a is 0
The value of a is 45
Copy Constructor is called here
The value of a is 0
*/
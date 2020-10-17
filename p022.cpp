//WAP to show the use of operator overloading of unary operator using member function as well as friend function

#include <iostream>
using namespace std;
class count
{
private:
    int value;

public:
    count(); // constructor

    // Unary operator as a  member function
    void operator++()
    {
        cout << "Unary operator overloading invoked as a member function " << endl;
        value++;
    }
    void display()
    {
        cout << "Count = " << value << endl;
    }
    // Unary operator as a  friend function
    friend void operator--(count obj);
};

count::count()
{
    value = 5;
}

void operator--(count obj1)
{
    cout << "Unary operator overloading invoked as a friend function " << endl;

    obj1.value--;
}
int main()
{
    count c1, c2, c3;
    cout << "Inital ";
    c1.display();
    ++c2;
    c2.display();

    --c3;
    c3.display();

    return 0;
}


/*
OUTPUT:
Inital Count = 5
Unary operator overloading invoked as a member function 
Count = 6
Unary operator overloading invoked as a friend function 
Count = 5
*/
//WAP to perform to addition ,subtraction , multiplication , division of  private data members of 2 classes using friend class

#include <iostream>
using namespace std;
class first;
class second
{
public:
    // void add(first);
    // void subtraction(first);
    // void multiplication(first);
    // void division(first);
    void doAll_Things(first);

};

class first
{
private:
    int num1, num2;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    //   friend void second :: add( first);   ---->>> it is also Right
    friend class second;
};

void second::doAll_Things(first Obj1)
{
    cout << "The addition of private data member of first class are  " << Obj1.num1 + Obj1.num2<<endl;
    cout << "The subtraction of private data member of first class are  " << Obj1.num1 - Obj1.num2<<endl;
    cout << "The multiplication of private data member of first class are  " << Obj1.num1 * Obj1.num2<<endl;
    cout << "The division of private data member of first class are  " << Obj1.num1 / Obj1.num2<<endl;

}

int main()
{
    int a, b;
    cout << "Enter the 2  numbers " << endl;
    cin >> a>> b;
    first o1;
    o1.setData(a, b);

    second o2;
    o2.doAll_Things(o1);
    return 0;
}

/*
 OUTPUT:
 Enter the 2  numbers
7
2
The addition of private data member of first class are  9       
The subtraction of private data member of first class are  5    
The multiplication of private data member of first class are  14
The division of private data member of first class are  3 
*/
//WAP to perform to add private data members of 3 classes using friend function and subtraction as a member function of one class and friend of another class.  
#include <iostream>
using namespace std;

class B;
class C;

class A
{
private:
    int a, b;

public:
    void takeData(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    
    friend void add(A, B, C);
    void subtraction(B,C); // it is a member function of A class which is going to be a friend of other 2 classes
};
class B
{
private:
    int x;

public:
    void takeData(int num1)
    {
        x = num1;
    }
    friend void add(A, B, C);
    friend void A :: subtraction(B,C); // making subtraction a friend of this class 
};
class C
{
private:
    int p, q, r;

public:
    void takeData(int num1, int num2, int num3)
    {
        p = num1;
        q = num2;
        r = num3;
    }
    friend void add(A, B, C);
    friend void A :: subtraction( B,C); // making subtraction a friend of this class 


};
void add(A o1, B o2, C o3)
{
    int res = (o1.a + o1.b + o2.x + o3.p + o3.q + o3.r);
    cout << "The sum of private data members of 3 classes are " << res << endl;
}

void A::subtraction(B Obj1, C obj2)
{
    int difference = ( Obj1.x - obj2.p - obj2.q - obj2.r);
    cout << "The difference of private data members of 3 classes giving one class as a member function and making other 2 classes as its friend  " << difference << endl;

}

int main()
{

    A first;
    B second;
    C third;

    first.takeData(3, 6);
    second.takeData(8);
    third.takeData(4, 0, 10);
    add(first, second, third);
    first.subtraction(second , third);
    return 0;
}

/*
 OUTPUT:
The sum of private data members of 3 classes are 31
The difference of private data members of 3 classes giving one class as a member function and making other 2 classes as its friend  -6
*/
//WAP to show the use of operator overloading of binary operator using  friend function

#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float imag;

public:
    void input()
    {
        cout << "Enter real part " << endl;
        cin >> real;
        cout << "Enter imaginary part  " << endl;

        cin >> imag;
    }
    void print()
    {
        if (imag < 0)
        {
            cout << "Complex is " << real << imag << "i" << endl;
        }
        else
        {
            cout << "Complex is " << real << "+" << imag << "i" << endl;
        }
    }
    friend complex operator+(complex obj1, complex obj2);

    void output()
    {
        cout << endl;
        cout << endl;

        if (imag < 0)
        {
            cout << "Sum of 3 complex numbers is ";
            cout << real << imag << "i";
        }
        else
        {
            cout << "Sum of 3 complex numbers is ";
            cout << real << "+" << imag << "i";
        }
    }
};
complex operator+(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imag = obj1.imag + obj2.imag;
    return temp;
}
int main()
{
    complex c1, c2, c3, result;
    cout << "Enter fisrt complex number\n";
    c1.input();
    c1.print();
    cout << "Enter second complex number\n";
    c2.input();
    c2.print();

    cout << "Enter third complex number\n";
    c3.input();
    c3.print();

    result = c1 + c2 + c3; //result=(c1.opertor+(c2))+c3 => temp.operator+(c3)
    result.output();
    return 0;
}
/*
OUTPUT:
Enter fisrt complex number
Enter real part
3
Enter imaginary part
9
Complex is 3+9i
Enter second complex number
Enter real part
2
Enter imaginary part
-6
Complex is 2-6i
Enter third complex number
Enter real part
4
Enter imaginary part
-1
Complex is 4-1i


Sum of 3 complex numbers is 9+2i
*/
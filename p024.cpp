//WAP to show the use of operator overloading of binary operator using  friend function perform sum , sub , multiplication

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
    friend complex operator-(complex obj1, complex obj2);
    friend complex operator*(complex obj1, complex obj2);

    void output()
    {
        cout << endl;
        if (imag < 0)
        {
            // cout << "Sum of 3 complex numbers is ";
            cout << real << imag << "i";
        }
        else
        {
            // cout << "Sum of 3 complex numbers is ";
            cout << real << "+" << imag << "i";
        }
        cout << endl;
    }
};
complex operator+(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imag = obj1.imag + obj2.imag;
    return temp;
}
complex operator-(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real - obj2.real;
    temp.imag = obj1.imag - obj2.imag;
    return temp;
}
complex operator*(complex obj1, complex obj2)
{
    complex temp;
    temp.real = (obj1.real * obj2.real) - (obj1.imag * obj2.imag);
    temp.imag = (obj1.real * obj2.imag) + (obj2.real * obj1.imag);
    return temp;
}
int main()
{
    complex c1, c2, c3, result, res, mul;
    cout << "Enter fisrt complex number\n";
    c1.input();
    c1.print();
    cout << "Enter second complex number\n";
    c2.input();
    c2.print();

    cout << "Enter third complex number\n";
    c3.input();
    c3.print();
    cout << "Sum of three complex number is\n"
         << endl;
    res = c1 + c2 + c3; //result=(c1.opertor+(c2))+c3 => temp.operator+(c3)
    res.output();
    cout << "Solving expression of three complex number is\n"
         << endl;

    result = c1 + c2 - c3; //result=(c1.opertor+(c2))+c3 => temp.operator+(c3)
    result.output();

    cout << "Multiplication of three complex number is\n"
         << endl;
    mul = c1 * c2 * c3;
    mul.output();
    return 0;
}
/*
OUTPUT:
Enter fisrt complex number
Enter real part 
2
Enter imaginary part  
-5
Complex is 2-5i
Enter second complex number
Enter real part 
1
Enter imaginary part  
6
Complex is 1+6i
Enter third complex number
Enter real part 
0
Enter imaginary part  
-3
Complex is 0-3i
Sum of three complex number is


3-2i
Solving expression of three complex number is


3+4i
Multiplication of three complex number is


21-96i
*/

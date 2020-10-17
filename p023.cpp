//obj3=obj1.opertor+(obj2)
//WAP to show the use of operator overloading of binary operator using member function
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
    complex operator+(complex obj2)
    {
        complex temp;
        temp.real = real + obj2.real;
        temp.imag = imag + obj2.imag;
        return temp;
    }
    void output()
    {
        if (imag < 0)
        {
            cout << "Output is ";
            cout << real << imag << "i";
        }
        else
        {
            cout << "Output is ";
            cout << real << "+" << imag << "i";
        }
    }
};
int main()
{
    complex c1, c2, result;
    cout << "Enter fisrt complex number\n";
    c1.input();
    cout << "Enter second complex number\n";
    c2.input();

    result = c1 + c2; //result=c1.opertor+(c2)
    result.output();
    return 0;
}

/*
OUTPUT:
Enter fisrt complex number
Enter real part 
6
Enter imaginary part  
-9
Enter second complex number
Enter real part 
2
Enter imaginary part
4
Output is 8-5i
*/
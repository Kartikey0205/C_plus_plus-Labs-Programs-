//WAP to demonstrate the inline Function

#include <iostream>
using namespace std;

inline int product(int x, int y)
{
    return (x * y);
}
int main()
{
    int num1, num2;
    cout << "Enter the value of first number" << endl;
    cin >> num1;
    cout << "Enter the value of second number" << endl;
    cin >> num2;
    cout << "Product of first and second number  is " << product(num1, num2) << endl;
    return 0;
}

/* 
OUTPUT:
Enter the value of first number
4
Enter the value of second number
9
Product of first and second number  is 36
*/
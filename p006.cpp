// WAP to swap 2 numbers using CALL BY REFERENCE VARIABLE
#include <iostream>
using namespace std;
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter two Numbers " << endl;
    cin >> x >> y;
    cout << "Before Swap the value of x is " << x << " and the value of y is " << y << endl;
    swapReferenceVar(x, y);
    cout << "After Swap" << endl;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}
/*
 OUTPUT:
Enter two Numbers
66
14
Before Swap the value of x is 66 and the value of y is 14
After Swap
The value of x is 14 and the value of y is 66
*/
// WAP to swap 2 numbers using CALL BY POINTERS
#include <iostream>
using namespace std;
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cout << "Enter two Numbers " << endl;
    cin >> x >> y;
    cout << "Before Swap the value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y);
    cout << "After Swap" << endl;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}

/*
 OUTPUT:
Enter two Numbers
48
93
Before Swap the value of x is 48 and the value of y is 93
After Swap
The value of x is 93 and the value of y is 48
*/
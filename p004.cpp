// WAP to swap 2 numbers using CALL BY VALUE
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "The value after swapping is " << a << " and " << b << endl;
}
int main()
{
    int x, y;
    cout << "Enter two Numbers " << endl;
    cin >> x >> y;
    cout << "Before Swap the value is " << x << " and " << y << endl;
    swap(x, y);
    return 0;
}

/*
 OUTPUT:
Enter two Numbers
76
98
Before Swap the value is 76 and 98
The value after swapping is 98 and 76
*/
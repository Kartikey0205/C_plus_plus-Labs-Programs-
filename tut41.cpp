// WAP to swap two number using the function Template concept
#include <iostream>
using namespace std;
template <class T>
void swaping(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter First number " << endl;
    cin >> x;
    cout << "Enter Second number " << endl;
    cin >> y;
    swaping(x, y);
    cout << "After Swapping: " << endl
         << "x = " << x << endl
         << "y = " << y;
    cout << endl;
    return 0;
}
/*
Output:
Enter First number
6
Enter Second number 
2
After Swapping: 
x = 2
y = 6
*/
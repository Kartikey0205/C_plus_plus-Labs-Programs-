// WAP to read 3 numbers and find its maximum
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the 3  number " << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is largest ";
        }
        else
        {
            cout << c << " is largest ";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is largest ";
        }
        else 
        {
            cout << c << " is largest ";
        }
    }

    return 0;
}

/*
 OUTPUT:
Enter the 3  number 
62
81
26
81 is largest 
*/
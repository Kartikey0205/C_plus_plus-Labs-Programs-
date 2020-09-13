//  WAP to find Factorial of a number
#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n, Factorial;
    cout << "Enter a number " << endl;
    cin >> n;
    Factorial = fact(n);
    cout << "The factorial of " << n << " is " << Factorial << endl;
    return 0;
}

int fact(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

/*
 OUTPUT:
Enter a number
6
The factorial of 6 is 720
*/
//WAP to implement function overloading

#include <iostream>
using namespace std;

void sum(int a, int b)
{
    cout << "\n sum = " << a + b;
}

void sum(float a, float b)
{
    cout << "\n sum = " << a + b;
}
int main()
{
    sum(5, 7);
    sum(4.5f, 2.3f);
    return 0;
}

/* 
OUTPUT 
sum = 12 
 sum = 6.8
*/
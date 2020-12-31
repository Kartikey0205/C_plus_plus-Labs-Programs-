// WAP to show how we can overload Template function.
#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am first Function " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am tempalised Function " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am tempalised Function1 " << a << endl;
}
int main()
{
    cout << endl;
    func(4);
    func(7.9);
    func1(7);
    return 0;
}
/*
Output:

I am first Function 4
I am tempalised Function 7.9
I am tempalised Function1 7
*/
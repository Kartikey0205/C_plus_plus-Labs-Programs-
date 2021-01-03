//Wap to explain how to use function object in C++ STL
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 8, 2, 68, 24, 89, 3};
    cout << "Ascending Order" << endl;

    sort(arr, arr + 7); //increasing order
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Descending Order" << endl;
    sort(arr, arr + 7, greater<int>()); //descending order , greater is a functor(Function Object)
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
/*
OUTPUT:
Ascending Order 
1
2
3
8
24
68
89
Descending Order
89
68
24
8
3
2
1
*/
//WAP to find sum of array element
#include <iostream>
using namespace std;
class array
{
private:
    int arr[10], S = 0;

public:
    void setArray(void);
    void sum(void);
};

void array::setArray()
{
    cout << "Enter the elements of ARRAY" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
}

void array::sum()
{
    for (int i = 0; i < 10; i++)
    {
        S = S + arr[i];
    }
    cout << "The sum of elements of  Array is " << S << endl;
}

int main()
{
    array A;
    A.setArray();
    A.sum();
    return 0;
}

/*
 OUTPUT:
Enter the elements of ARRAY
1
2
3
4
5
6
7
8
9
10
The sum of elements of  Array is 55
*/
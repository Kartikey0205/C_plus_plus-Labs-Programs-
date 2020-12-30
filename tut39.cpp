//WAP which describes about Templates of C++
#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)

    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{

    // using Templates !!

    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 0.5;
    v1.arr[2] = 8.3;

    vector<float> v2(3);
    v2.arr[0] = 2.6;
    v2.arr[1] = 9.9;
    v2.arr[2] = 0.0;
    float result = v1.dotProduct(v2);
    cout << result;
    return 0;
}
/*
OUTPUT:
8.59
*/
// WAP to show how we can create vector or array with STL and show push , pop function in it .
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "Dispalying the vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int item, size;
    cout << "Enter the size of vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add this vector ";
        cin >> item;

        vec1.push_back(item);
    }
    cout << "After Pushing " << endl;
    display(vec1);
    cout << endl;
    cout << "After popping " << endl;
    vec1.pop_back();
    display(vec1);
    cout << endl;
    return 0;
} 
/*
OUTPUT:
Enter the size of vector
8
Enter an element to add this vector 1
Enter an element to add this vector 2
Enter an element to add this vector 3
Enter an element to add this vector 4
Enter an element to add this vector 5
Enter an element to add this vector 6
Enter an element to add this vector 7
Enter an element to add this vector 8
After Pushing
Dispalying the vector
1 2 3 4 5 6 7 8

After popping
Dispalying the vector
1 2 3 4 5 6 7

*/
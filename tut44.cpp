// WAP to show how we can insert element in vector or array using iterator with STL and show push , pop function in it .
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

    //Inserting using Iterators.

    //Making iterator
    vector<int>::iterator itr = vec1.begin(); // begin consider krega ki suru ki trf se add krna h .
    //syntax - insert(iterator_name , repeatation_time  , item_value)
    cout << "Inserting element at 1st place  " << endl;

    vec1.insert(itr, 2, 59);
    display(vec1);
    cout << endl;
    cout << "Inserting element at 4th place  " << endl;
    vec1.insert(itr + 3, 2, 49);
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
5
Enter an element to add this vector 1
Enter an element to add this vector 2
Enter an element to add this vector 3
Enter an element to add this vector 4
Enter an element to add this vector 5
After Pushing
Dispalying the vector
1 2 3 4 5

Inserting element at 1st place
Dispalying the vector
59 59 1 2 3 4 5

Inserting element at 4th place
Dispalying the vector
59 59 1 49 49 2 3 4 5

After popping
Dispalying the vector
59 59 1 49 49 2 3 4

*/
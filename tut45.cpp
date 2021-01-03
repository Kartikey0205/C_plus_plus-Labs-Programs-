//WAP to explain each concept of List in STL like inserting element , removing of item , sorting of item , reversing of list , merging of list
#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    //Making iterator
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter
             << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(15);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(0);
    list1.push_back(8);
    list1.push_back(2);

    cout << "After adding item of list1 ";
    display(list1);
    cout << endl;

    //Removing list item
    cout << "After removing item from last ";
    list1.pop_back();
    display(list1);
    cout << endl;
    cout << "After removing item from first ";
    list1.pop_front();
    display(list1);
    cout << endl;
    cout << "After removing particular item from list ";
    list1.remove(9);
    display(list1);
    cout << endl;

    //Sorting list item
    list1.sort();
    cout << "After sorting ";
    display(list1);
    cout << endl;
    //Reversing list item
    list1.reverse();
    cout << "After reversing ";
    display(list1);
    cout << endl;

    //Empty list of length size  3
    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 5;
    iter++;
    *iter = 95;
    iter++;
    cout << "Items of list2 " << endl;
    display(list2);
    cout << endl;
    //Merging of list
    list1.merge(list2);
    cout << "List 1 after merging " << endl;
    display(list1);
    return 0;
}
/*
Output:
After adding item of list1 5 15 7 9 0 8 2 

After removing item from last 5 15 7 9 0 8 

After removing item from first 15 7 9 0 8 

After removing particular item from list 15 7 0 8 

After sorting 0 7 8 15 

After reversing 15 8 7 0 

Items of list2 
45 5 95 

List 1 after merging 
15 8 7 0 45 5 95 
*/
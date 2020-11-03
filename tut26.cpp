//WAP to show the use of operator overloading of relational operator
#include <iostream>
using namespace std;

class vote
{
private:
    int age;

public:
    vote()
    {
        age = 0;
    }
    vote(int A)
    {
        age = A;
    }
    bool operator>(const vote &v)
    {
        if ((age > v.age))
        {
            return true;
        }

        return false;
    }
};
int main()
{
    int f1, f2;
    cout << "Enter the age of first person " << endl;
    cin >> f1;
    cout << "Enter the age of second person " << endl;
    cin >> f2;
    vote v1(f1), v2(f2);

    if (v1 > v2)
    {
        cout << "Age of second person is less than the first one " << endl;
    }
    else
    {
        cout << "Age of second person is Greater than the first one" << endl;
    }

    return 0;
}

/*
OUTPUT:
Enter the age of first person 
39
Enter the age of second person 
90
Age of second person is Greater than the first one
*/
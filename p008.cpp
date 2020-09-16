// WAP  to check that number is prime or not
#include <iostream>
using namespace std;

class prime
{
private:
    int i, num;

public:
    void checkprime();
    void result();
};

void prime::checkprime()
{
    cout << "Enter the number " << endl;
    cin >> num;
}

void prime::result()
{
    for (i = 2; i < num ; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (i == num)
    {
        cout << "The number you entered is PRIME NUMBER" << endl;
    }
    else
    {
        cout << "The number you entered is not PRIME NUMBER" << endl;
    }
}

int main()
{
    prime P;
    P.checkprime();
    P.result();
    return 0;
}

/*
 OUTPUT:
Enter the number
101
The number you entered is PRIME NUMBER
*/
// WAP to check that number is Armstrong Number or not
#include <iostream>
using namespace std;

class armstrong
{
private:
    int num, r, S, real;

public:
    void checkarmstrong();
    void result();
};

void armstrong::checkarmstrong()
{
    cout << "Enter the number " << endl;
    cin >> num;
    real = num;
}
void armstrong::result()
{
    S = 0;
    while (num != 0)
    {
        r = num % 10;
        S = S + r * r * r;
        num = num / 10;
    }
    if (S == real)
    {
        cout << "Yes it is ARMSTRONG NUMBER" << endl;
    }
    else
    {
        cout << "No it is not ARMSTRONG NUMBER" << endl;
    }
}
int main()
{

    armstrong A;
    A.checkarmstrong();
    A.result();
    return 0;
}

/*
 OUTPUT:
Enter the number 
471
No it is not ARMSTRONG NUMBER
*/
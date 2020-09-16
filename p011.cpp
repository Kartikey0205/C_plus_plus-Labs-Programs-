// WAP to develop Mini Calculator
#include <iostream>
using namespace std;
class miniCalculator
{
private:
    int a, b, choice;

public:
    void setData();
    void solve();
};
void miniCalculator::setData()
{
    cout << "Enter 2 numbers " << endl;
    cin >> a >> b;
    cout << "Enter the number for operator \n"
         << endl
         << " Enter 1 for addition " << endl
         << " Enter 2 for subtraction " << endl
         << " Enter 3 for multiplication " << endl
         << " Enter 4 for division " << endl
         << " Enter 5 for modulus " << endl;
    cin >> choice;
}
void miniCalculator::solve()
{
    switch (choice)
    {
    case 1:
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
        break;
    case 2:
        cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
        break;
    case 3:
        cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
        break;
    case 4:
        cout << "The division of " << a << " and " << b << " is " << a / b << endl;
        break;
    case 5:
        cout << "The modulus of " << a << " and " << b << " is " << a % b << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
}

int main()
{

    miniCalculator C;
    C.setData();
    C.solve();
    return 0;
}

/*
 OUTPUT:
Enter 2 numbers 
45
9
Enter the number for operator 

 Enter 1 for addition
 Enter 2 for subtraction
 Enter 3 for multiplication
 Enter 4 for division
 Enter 5 for modulus
3
The multiplication of 45 and 9 is 405
*/
// WAP that demonstrate Default Arguments in C++
#include <iostream>
using namespace std;

float moneyrecivce(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

int main()
{
    int money;
    cout << "Enter the Money" << endl;
    cin >> money;
    cout << "If you deposit " << money << " Rs then the amount after one  year  you will get will be Rs. " << moneyrecivce(money) << endl;
    cout << endl;
    cout << endl;
    cout << "But if you are V.I.P then " << endl;
    cout << "If you deposit " << money << " Rs then the amount after one  year  you will get will be Rs. " << moneyrecivce(money, 1.2) << endl;
    cout << endl;
    return 0;
}

/*
 OUTPUT:
Enter the Money
100000
If you deposit 100000 Rs then the amount after one  year  you will get will be Rs. 104000


But if you are V.I.P then
If you deposit 100000 Rs then the amount after one  year  you will get will be Rs. 120000
*/
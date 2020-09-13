// WAP to read a number and counts a number of digits in it
#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter a number " << endl;
    cin >> num;
    int i = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "Total number of digits in " << i << " is " << count << endl;
    return 0;
}

/*
 OUTPUT:
Enter a number
19092019
Total number of digits in 19092019 is 8
*/
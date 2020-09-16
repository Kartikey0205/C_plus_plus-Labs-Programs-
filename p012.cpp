// WAP to perform matrix addition and subtraction by making matrix class.
#include <iostream>
using namespace std;
class matrix
{
private:
    int A[2][2], B[2][2], C[2][2], sum[2][2], dif[2][2], i, j;

public:
    void setData(void);
    void print_AB_matrix(void);
    void printRESULT(void);
};

void matrix::setData()
{
    cout << "Enter the values of first MATRIX " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the values of second MATRIX " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }
}

void matrix::print_AB_matrix()
{
    cout << "The first Array is " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "The second Array is " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
}
void matrix::printRESULT()
{
    cout << "SUM OF first and second matrix is :" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
        cout << "\n";
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Difference OF first and second matrix is :" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            dif[i][j] = A[i][j] - B[i][j];
        }
        cout << "\n";
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << dif[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    matrix M;
    M.setData();
    M.print_AB_matrix();
    M.printRESULT();

    return 0;
}

/*
 OUTPUT:
 Enter the values of first MATRIX
1
2
3
4
Enter the values of second MATRIX 
4
3
2
1
The first Array is 
1 2 
3 4 
The second Array is 
4 3 
2 1 
SUM OF first and second matrix is :


5 5
5 5
Difference OF first and second matrix is :


-3 -1
1 3

*/
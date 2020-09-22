/* 
 Define a class book having following attributes
 Data members:
 Int book_ id
 String book_title
 Int book_cost
 String book_author_name
Member function:
 Void input_data(); //for input book details
 Void print(); // To display book details
 read details of n books from user and print them
 */
#include <iostream>
using namespace std;
class book
{
private:
    int book_id;
    string book_title;
    int book_cost;
    string book_author_name;
    

public:
   
    void input_data();
    void print();
};
void book::input_data()
{
    cout << "Enter the Id no  of the Book " << endl;
    cin >> book_id;
    cout << "Enter the cost of  the Book " << endl;
    cin >> book_cost;
    cout << "Enter the Title of  the Book " << endl;
    cin >> book_title;
    cout << "Enter the Author Name of  the Book " << endl;
    cin >> book_author_name;
}

void book::print()
{
    cout << endl;
    cout << "Details of Book are" << endl;
    cout << endl;
    cout << "The Id of Book is " << book_id << endl;
    cout << "The Cost of Book is Rs. " << book_cost << endl;
    cout << "The Title of Book is " << book_title << endl;
    cout << "The Author Name of Book is " << book_author_name << endl;
    cout << endl;
}
int main()
{
    // book B1, B2;
    // B1.input_data();
    // B1.print();

    // B2.input_data();
    // B2.print();
    int n;
    cout << "Enter the Total number of Books" << endl;
    cin >> n;
    cout << endl;
    book B[n];

    for (int i = 0; i < n; i++)
    {
        B[i].input_data();
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        B[i].print();
        cout << endl;
    }
    return 0;
}

/*
 OUTPUT:
Enter the Total number of Books
3

Enter the Id no  of the Book
100
Enter the cost of  the Book
300
Enter the Title of  the Book 
Computer
Enter the Author Name of  the Book 
Reema_Thareja

Enter the Id no  of the Book 
101
Enter the cost of  the Book 
450
Enter the Title of  the Book 
Web_development
Enter the Author Name of  the Book 
Kartikey

Enter the Id no  of the Book 
102
Enter the cost of  the Book 
500
Enter the Title of  the Book 
Python
Enter the Author Name of  the Book 
Kartikey_Dubey


Details of Book are

The Id of Book is 100
The Cost of Book is Rs. 300
The Title of Book is Computer
The Author Name of Book is Reema_Thareja



Details of Book are

The Id of Book is 101
The Cost of Book is Rs. 450
The Title of Book is Web_development
The Author Name of Book is Kartikey



Details of Book are

The Id of Book is 102
The Cost of Book is Rs. 500
The Title of Book is Python
The Author Name of Book is Kartikey_Dubey


*/
#include <iostream>
using namespace std;

class Book
{ // Base Class
public:
    int bookId;
    void id(int x)
    {
        bookId=x;
    }
    void Display()
    {
        cout<<"Book ID: "<<bookId;
    }
};

class Library : protected Book//Protected Inheritance
{
    public:
    void setId(int x)
    {
        id(x);
    }
    void displayBookID()
    {
        Display();
    }
};
int main()
{
    Library l;
    l.setId(3234);
    l.displayBookID();
    return 0;
}
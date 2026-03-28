#include<iostream>
using namespace std;

class Date
{
public:
    Date(int = 1, int = 1, int = 2000); // default constructor with default arguments
    void print();

private:
    int month;
    int day;
    int year;
};

// Constructor definition
Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

// Print function
void Date::print()
{
    cout << month << "/" << day << "/" << year;
}

// Main function
int main()
{
    Date date1(7, 4, 2004);
    Date date2;  // defaults to 1/1/2000

    cout << "date1 = ";
    date1.print();

    cout << "\ndate2 = ";
    date2.print();

    // Member-wise assignment
    date2 = date1;

    cout << "\n\nAfter default memberwise assignment, date2 = ";
    date2.print();

    cout << endl;

    return 0;
}
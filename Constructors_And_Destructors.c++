#include <iostream>
using namespace std;

class demo
{
public:
    int num1; // Data member (each object gets its own copy)

    demo()
    {
        cout << "Constructor has been called!\n"; // Constructor runs automatically when an object is created
    }

    ~demo()
    {
        cout << "Destructor has been called!\n"; // Destructor runs automatically when an object is destroyed
    }
};

int main()
{
    demo d1[5]; // Creates an array of 5 objects -> constructor is called 5 times (once per element)
               // When main ends, the array goes out of scope -> destructor is called 5 times in reverse order

    return 0;  // Program ends; local objects are cleaned up automatically
}
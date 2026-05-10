#include <iostream>
using namespace std;

class Animal
{ // Base Class
public:
    void Display()
    {
        cout << "This is the function of Base Class!";
    }
};

class Dog : public Animal//Public Inheritance
{ 
public:
    void Bark()
    {
        cout << "\nThis is the function of Derived Class!";
    }
    // In public inheritance, the public and protected members of the base class retain their 
    // access level in the derived class, allowing access through derived class objects.
};

int main()
{
    Dog d1;
    d1.Display();//You can use base class public functions through a derived class object
    d1.Bark();
    return 0;
}
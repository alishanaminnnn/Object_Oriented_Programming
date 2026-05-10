#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating\n";
    }
};

// Derived Class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking\n";
    }
};

int main()
{
    Dog d;

    d.eat();   // ✅ from Animal (base class)
    d.bark();  // ✅ from Dog (derived class)

    return 0;
}
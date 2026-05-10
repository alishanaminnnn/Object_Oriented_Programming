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

// Intermediate Class (Derived from Animal)
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking\n";
    }
};

// Final Derived Class (Derived from Dog)
class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Puppy is weeping\n";
    }
};

int main()
{
    Puppy p;

    p.eat();   // from Animal
    p.bark();  // from Dog
    p.weep();  // from Puppy

    return 0;
}
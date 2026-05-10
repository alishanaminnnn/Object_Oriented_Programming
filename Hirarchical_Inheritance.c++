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

// Derived Class 1
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking\n";
    }
};

// Derived Class 2
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing\n";
    }
};

int main()
{
    Dog d;
    Cat c;

    d.eat();   // from Animal
    d.bark();  // Dog function

    c.eat();   // from Animal
    c.meow();  // Cat function

    return 0;
}
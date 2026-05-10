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

// Derived from Animal (Multilevel part)
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking\n";
    }
};

// Another Base Class
class Trainer
{
public:
    void train()
    {
        cout << "Trainer is training\n";
    }
};

// Hybrid part (Dog + Trainer)
class SuperDog : public Dog, public Trainer
{
public:
    void show()
    {
        cout << "SuperDog is active\n";
    }
};

int main()
{
    SuperDog sd;

    sd.eat();    // from Animal (via Dog)
    sd.bark();   // from Dog
    sd.train();  // from Trainer
    sd.show();   // from SuperDog

    return 0;
}
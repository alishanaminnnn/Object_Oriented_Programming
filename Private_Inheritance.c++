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

class Dog : private Animal//Private Inheritance
{ 
public:
    void Bark()
    {
        cout << "\nThis is the function of Derived Class!";
    }
    void DisplayBaseFunction(){
        Display();
    }
};

int main()
{
    Dog d1;
    // d1.Display() You can't use base class public functions through a derived class object
    d1.Bark();
    d1.DisplayBaseFunction();//we can access the Function of base through derived is by making a
    //function in derived class that call the base class function.
    return 0;
}
#include <iostream>
using namespace std;

// Base Class 1
class Teacher
{
public:
    void teach()
    {
        cout << "Teacher is teaching\n";
    }
};

// Base Class 2
class Researcher
{
public:
    void research()
    {
        cout << "Researcher is doing research\n";
    }
};

// Derived Class (inherits from both)
class Professor : public Teacher, public Researcher
{
public:
    void work()
    {
        cout << "Professor is working\n";
    }
};

int main()
{
    Professor p;

    p.teach();     // from Teacher
    p.research();  // from Researcher
    p.work();      // from Professor

    return 0;
}
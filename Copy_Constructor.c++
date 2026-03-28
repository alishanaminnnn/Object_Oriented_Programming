#include <iostream>
using namespace std;

class Student {
public:
    string Name; // stores the student's name
    int age;     // stores the student's age

    Student() {
        Name = "Epstein"; // default constructor: sets default name
        age = 12;         // default constructor: sets default age
    }

    Student(const Student &s) {
        Name = s.Name; // copy constructor: copies name from another object
        age = s.age;   // copy constructor: copies age from another object
    }
};

int main() {
    Student s1;          // creates object -> default constructor runs
    s1.Name = "Alishan"; // updates s1 data members manually
    s1.age = 13;         // updates s1 data members manually

    Student s2(s1);      // creates s2 as a copy of s1 -> copy constructor runs

    return 0;            // program ends; destructors are called automatically (default destructor here)
}

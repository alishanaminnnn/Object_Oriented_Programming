#include <iostream>
using namespace std;

class Student {
public:
    string name;      // student name
    int rollnumber;   // student roll number
    int age;          // student age

    Student() {
        name = "Amin";        // default value set by default constructor
        rollnumber = 23;      // default value set by default constructor
        age = 21;             // default value set by default constructor
    }

    Student(string n, int r, int a) {
        name = n;             // parameterized constructor assigns given name
        rollnumber = r;       // parameterized constructor assigns given roll number
        age = a;              // parameterized constructor assigns given age
    }
};

class Employee {
public:
    string EmployeeName;  // employee name
    int salary;           // employee salary

    Employee() {
        EmployeeName = "khan"; // default value set by default constructor
        salary = 30000;        // default value set by default constructor
    }

    Employee(string e, int s) {
        EmployeeName = e;      // parameterized constructor assigns given employee name
        salary = s;            // parameterized constructor assigns given salary
    }
};

int main() {
    Student s[] = {
        Student("alishan", 23, 2), // array initialized using parameterized constructor
        Student("alu", 43, 2)      // another Student object in the array
    };

    Employee e[] = {
        {"shan", 23000}, // aggregate/initializer-list style initialization -> calls Employee(string,int)
        {"Amin", 40000}  // another Employee object in the array
    };

    return 0; // program ends; local arrays are destroyed automatically
}

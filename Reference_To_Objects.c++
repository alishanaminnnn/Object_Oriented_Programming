#include <iostream>   // For output using cout
using namespace std;  // Avoids writing std:: before standard library names

// Class representing a student
class Student {
public:
    int marks;  // Stores the student's marks
};

int main() {
    Student s;        // Create a Student object
    s.marks = 80;     // Assign initial marks

    Student &ref = s; // Create a reference to the same object 's'
    ref.marks = 20;   // Modify marks through the reference (also changes 's.marks')

    cout << "The changed value is " << s.marks; // Print the updated marks

    return 0;  // Indicate successful program termination
}
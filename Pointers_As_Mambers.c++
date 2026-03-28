#include<iostream>
using namespace std;

class student
{
private:
    int *rollnumber;           // Pointer to store roll number dynamically

public:
    void setrollnumber(int r)
    {
        rollnumber = new int;  // Allocate memory for roll number
        *rollnumber = r;       // Store the given roll number in allocated memory
    }

    int* getrollnumber()
    {
        return rollnumber;     // Return the pointer to the roll number
    }
};

int main()
{
    student s1;                              // Create a student object
    s1.setrollnumber(23);                    // Set roll number for the student
    cout << "The rollnumber is "             // Print label
         << *(s1.getrollnumber());           // Dereference pointer to print roll number

    return 0;                                // Indicate successful program termination
}
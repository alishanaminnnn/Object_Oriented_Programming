#include <iostream> // Includes input/output stream library for cin/cout
using namespace std; // Allows using standard library names (cout, cin, string) without std::

class Students // Class to store and manage a student's data
{
public:
    string Name;      // Stores the student's name
    int RollNumber;   // Stores the student's roll number
    int Marks;        // Stores the student's marks

    void inputData() // Function to take student data as input
    {
        cout << "Enter Name: "; // Prompt user to enter name
        getline(cin, Name);     // Read full name (including spaces)

        cout << "Enter Roll Number: "; // Prompt user to enter roll number
        cin >> RollNumber;             // Input roll number

        cout << "Enter Marks: "; // Prompt user to enter marks
        cin >> Marks;            // Input marks
    }

    void Details() // Function to display student details
    {
        cout << "Name: " << Name << endl;             // Display name
        cout << "Roll Number: " << RollNumber << endl; // Display roll number
        cout << "Marks: " << Marks << endl;           // Display marks
    }
};

int main() // Program entry point
{
    Students s1; // Create an object of Students class

    s1.inputData(); // Call function to input student data

    cout << "\n--- Student Details ---" << endl; // Print header for details
    s1.Details(); // Call function to display student data

    return 0; // End program successfully
}

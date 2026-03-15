#include <iostream> // Includes input/output stream library for cin/cout
using namespace std; // Allows using standard library names without std::

class Result // Class to store student info and calculate/display result
{
    public:
    string Name;      // Stores student's name
    int Rollnumber;   // Stores student's roll number
    int Marks[5];     // Stores marks for 5 subjects

    void inputData() // Function to take student input
    {
        cout << "Enter Name: ";               // Prompt for name
        getline(cin, Name);                   // Read full name (including spaces)

        cout << "Enter your Roll Number: ";   // Prompt for roll number
        cin >> Rollnumber;                    // Input roll number

        for (int i = 0; i < 5; i++)           // Loop to input 5 subject marks
        {
            cout << "Enter Mark in " << i + 1 << " Subject(0-100): "; // Prompt for each subject mark
            cin >> Marks[i];                  // Input mark for subject i
        }
    }

    int calculateAverage() // Function to calculate and return average marks
    {
        int average = 0;                      // Variable to hold total marks
        for (int i = 0; i < 5; i++)           // Sum marks of all 5 subjects
        {
            average = average + Marks[i];     // Add each subject mark to total
        }
        return average / 5;                   // Return average (integer division)
    }

    void displayResult() // Function to display marks, average, and pass/fail
    {
        for (int i = 0; i < 5; i++)           // Loop to display marks for all subjects
        {
            cout << "Mark in " << i + 1 << " Subject: " << Marks[i] << endl; // Print each subject mark
        }

        cout << "The Average is: " << calculateAverage(); // Display average marks

        int avg = calculateAverage();         // Store average in a variable for decision making

        if (avg > 50)                         // Check if average is greater than 50
        {
            cout << endl << "Result: " << "PASS"; // Print PASS if condition is true
        }
        else                                  // Otherwise, student fails
        {
            cout << endl << "Result: " << "FAIL"; // Print FAIL if condition is false
        }
    }
};

int main() // Program entry point
{
    Result r[2];                              // Create an array of 2 Result objects (2 students)

    for (int i = 0; i < 2; i++)               // Loop to take input and show result for 2 students
    {
        cout << "---STUDENT INFO---" << endl; // Print header for student info
        r[i].inputData();                     // Input data for current student

        cout << "---RESULT OF " << r[i].Name << "---" << endl; // Print header with student's name
        r[i].displayResult();                 // Display result of current student

        cout << endl;                         // Print a blank line for spacing
        cin.ignore();                         // Ignore leftover newline before next getline in next loop
    }

    return 0;                                 // End program successfully
}

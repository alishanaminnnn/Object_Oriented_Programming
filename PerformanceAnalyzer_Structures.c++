#include <iostream>   // For input and output
using namespace std;

// Structure to store student information
struct student_info
{
    string name;        // Student name
    int ID;             // Student ID
    int subjects;       // Number of subjects
    float scores[5];    // Array to store scores (maximum 5 subjects)
};

// Function to calculate average marks
float processPersonData(student_info s)
{
    float sum = 0;   // Variable to store total marks

    // Loop to calculate sum of scores
    for (int i = 0; i < s.subjects; i++)
    {
        sum = sum + s.scores[i];
    }

    return sum / s.subjects;   // Return average
}

int main()
{
    student_info s;           // Create structure variable
    student_info *ptr = &s;   // Pointer to structure

    cout << "Enter student name:";
    cin >> ptr->name;   // Access structure members using arrow operator

    cout << "Enter ID: ";
    cin >> ptr->ID;

    cout << "Number Of Subjects: ";
    cin >> ptr->subjects;

    cout << "Enter " << ptr->subjects << " Scores:";
    for (int i = 0; i < ptr->subjects; i++)
    {
        cin >> ptr->scores[i];   // Store subject scores
    }

    cout << "\n\n\n-----STUDENT INFO---------\n";
    cout << "Name: " << ptr->name << endl;
    cout << "ID: " << ptr->ID << endl;
    cout << "Subjects: " << ptr->subjects << endl;

    cout << "Scores: ";
    for (int i = 0; i < ptr->subjects; i++)
    {
        cout << ptr->scores[i] << ' ';   // Display scores
    }

    // Call function to calculate average
    float average = processPersonData(s);
    cout << endl << "The Average: " << average;

    // Finding highest and second highest score
    float highest = ptr->scores[0];
    float second = ptr->scores[0];

    for (int i = 0; i < ptr->subjects; i++)
    {
        if (ptr->scores[i] > highest)
        {
            second = highest;             // Previous highest becomes second
            highest = ptr->scores[i];     // Update highest
        }
        else if (ptr->scores[i] > second && ptr->scores[i] != highest)
        {
            second = ptr->scores[i];      // Update second highest
        }
    }

    cout << endl << "Second Highest Score: " << second;

    return 0;   // End program
}
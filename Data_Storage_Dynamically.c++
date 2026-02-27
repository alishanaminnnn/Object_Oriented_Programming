#include <iostream>   
using namespace std;

// Function to store and display scores using dynamic memory
void score(int *s)
{
    int *ptr = new int[*s];   // Dynamically allocate memory for scores
    int *ptrrr = ptr;        // Store starting address of allocated memory

    // Loop to input scores
    for (int i = 0; i < *s; i++, ptr++)
    {
        cout << "Enter score for teacher " << i + 1 << " :";
        cin >> *ptr;         // Store score in dynamically allocated memory
    }

    // Loop to display scores
    for (int i = 0; i < *s; i++, ptrrr++)
    {
        cout << "Teacher " << i + 1 << ":" << *ptrrr << endl;  // Print scores
    }
}

int main()
{
    int size;   // Variable to store number of teachers

    cout << "Enter Number of teachers: ";
    cin >> size;   // Input number of teachers

    score(&size);  // Pass address of size to function

    return 0; }
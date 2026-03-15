#include <iostream> // Includes input/output stream library for cin/cout
using namespace std; // Allows using standard library names without std::

class Book // Class to store and manage book information
{
public:
    string BookTitle;  // Stores the book title
    string AuthorName; // Stores the author name
    int Price;         // Stores the book price

public:
    void inputData() // Function to take book data as input
    {
        cout << "Enter Book Title: ";      // Prompt user to enter book title
        getline(cin, BookTitle);           // Read full book title (including spaces)
        cout << "Enter Author Name: ";     // Prompt user to enter author name
        getline(cin,AuthorName);           // Read full author name (including spaces)
        cout << "Enter Price: ";           // Prompt user to enter price
        cin >> Price;                      // Input price
        cin.ignore();                      // Ignore leftover newline in input buffer
    }

public:
    void Details() // Function to display book details
    {
        cout << "Book Name: " << BookTitle << endl;    // Display book title
        cout << "Author Name: " << AuthorName << endl; // Display author name
        cout << "Price : " << Price << endl;           // Display price
    }
};

int main() // Program entry point
{
    Book s[3]; // Create an array of 3 Book objects

    for (int i = 0; i < 3; i++) // Loop to input data for 3 books
    {
        cout << "Book " << i + 1 << endl; // Display which book number is being entered
        s[i].inputData();                 // Call input function for the current book
    }

    cout << endl
         << endl
         << "---Books Details---" << endl; // Print header for displaying all book details

    for (int i = 0; i < 3; i++) // Loop to display data for 3 books
    {
        cout << "Book " << i + 1 << endl; // Display which book number is being shown
        s[i].Details();                   // Call details function for the current book
        cout << endl;                     // Print a blank line for spacing
    }

    return 0; // End program successfully
}

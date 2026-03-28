#include<iostream>
#include<cstring>
using namespace std;

class inventory {
public:
    char *description;   // Pointer to dynamically store item description
    int cost;            // Cost of the item
    int units;           // Number of units available

public:
    inventory(char *d, int c, int u) {              // Parameterized constructor
        description = new char[strlen(d) + 1];      // Allocate memory for description (+1 for '\0')
        strcpy(description, d);                     // Copy given description into allocated memory
        cost = c;                                   // Set item cost
        units = u;                                  // Set item units
    }

    ~inventory() {                   // Destructor
        delete[] description;        // Free dynamically allocated memory for description
    }

    void display() {                 // Function to display inventory details
        cout << "----INVENNTORY----\n";
        cout << "Item: " << description;
        cout << "\nCost: " << cost;
        cout << "\nunits: " << units << endl << endl;
    }

    inventory() {                                // Default constructor
        description = new char[6];               // Allocate memory for "Apple" (5 chars + '\0' = 6)
        strcpy(description, "Apple");            // Set default item description
        cost = 300;                              // Set default cost
        units = 4;                               // Set default units
    }
};

int main() {
    inventory i1("Book", 200, 10);   // Create inventory object using parameterized constructor
    i1.display();                    // Display i1 details

    inventory i2;                    // Create inventory object using default constructor
    i2.display();                    // Display i2 details

    return 0;                        // End of program
}
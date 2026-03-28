#include<iostream>
using namespace std;

class rectangle {
private:
    int lenght;                 // Stores the length of the rectangle
    int width;                  // Stores the width of the rectangle

public:
    rectangle(int l, int w) {   // Parameterized constructor to initialize length and width
        lenght = l;             // Assign given length to member variable
        width = w;              // Assign given width to member variable
    }

    int CalculateArea() {       // Function to calculate area of rectangle
        return lenght * width;  // Area = length * width
    }

    ~rectangle() {              // Destructor (called when object is destroyed)
        // Destructor is called
    }
};

int main() {
    rectangle *r1 = new rectangle(2, 4);                 // Create rectangle object dynamically
    cout << "The area of the rectangle is "              // Print label
         << r1->CalculateArea();                         // Call function using pointer and print area

    return 0;                                            // End of program
}
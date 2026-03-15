#include <iostream> // Includes input/output stream library for cin/cout
using namespace std; // Allows using standard library names without std::

class Rectangle // Class representing a rectangle
{
public:
    int lenght; // Stores the length of the rectangle (spelled as in code)
    int width;  // Stores the width of the rectangle

    int calculateArea() // Function to calculate and return area
    {
        return lenght * width; // Area = length * width
    }
};

int main() // Program entry point
{
    Rectangle R1; // Create a Rectangle object

    cout << "Enter Lenght: "; // Prompt user to enter length
    cin >> R1.lenght;         // Input length

    cout << "Enter Width: ";  // Prompt user to enter width
    cin >> R1.width;          // Input width

    cout << "The Area is " << R1.calculateArea(); // Display calculated area

    return 0; // End program successfully
}

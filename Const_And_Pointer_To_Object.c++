#include <iostream>   // For input/output (cout, endl)
using namespace std;  // Allows using std names without the std:: prefix

// Class representing a rectangle-like area calculation
class area
{
public:
   int lenght;  // Stores the length (note: variable name is misspelled)
   int breath;  // Stores the breadth (note: variable name is misspelled)

public:
   // Calculates and returns the area = length * breadth
   int areacalculate()
   {
      return lenght * breath;
   }

   // Returns the length without modifying the object (const function)
   int getlenght() const
   {
      return lenght;
   }
};

int main()
{
   area a1;        // Create an object of class area
   area *ptr;      // Create a pointer to an area object
   ptr = &a1;      // Point ptr to the address of a1

   ptr->breath = 21;   // Set breadth using pointer access
   ptr->lenght = 12;   // Set length using pointer access

   // Print the computed area
   cout << "The area is " << ptr->areacalculate();

   // Print the length returned by a const member function
   cout << "The constant is " << ptr->getlenght();

   return 0;  // Indicate successful program termination
}

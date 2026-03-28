#include <iostream>   // For output using cout
using namespace std;  // Avoids writing std:: before standard library names

// Class that stores and provides access to length and width values
class area
{
private:
   int len;    // Stores the length
   int width;  // Stores the width (not used in this program)

public:
   // Sets the length value (note: function is declared int but does not return anything)
   int setlenght(int l)
   {
      len = l;  // Assign the parameter value to len
   }

   // Returns the current length value
   int getlenght()
   {
      return len;
   }
};

int main()
{
   area *a1 = new area;  // Dynamically allocate an area object on the heap
   a1->setlenght(30);    // Set the length to 30 using the pointer
   cout << a1->getlenght(); // Print the stored length

   delete a1;  // Free the dynamically allocated memory
   a1 = NULL;  // Set pointer to NULL to avoid a dangling pointer

   return 0;   // Indicate successful program termination
}
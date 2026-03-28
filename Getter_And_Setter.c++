#include <iostream>      // Provides input/output stream objects like std::cout
using namespace std; // Lets us use standard library names without std::

class area // A simple class to store and show a value
{
private:
   int a; // Private data member (accessible only inside the class)
   int b; // Private data member (declared but not used in this program)

public:
   int seta(int m); // Setter function declaration (sets value of 'a')
   void display();  // Displays the current value of 'a'
   int geta();      // Getter function declaration (returns value of 'a')
};

int area::seta(int m) // Definition of setter function
{
   a = m; // Assign the input value 'm' to member variable 'a'
} // Note: function is declared int but does not return a value

void area::display()
{                                // Definition of display function
   cout<< "The value is " << a; // Print the value stored in 'a'
}

int area::geta()
{            // Definition of getter function
   return a; // Return the current value of 'a'
}

int main()
{
   area a1;                                                         // Create an object of class area
   a1.seta(32);                                                     // Set 'a' to 32 using the setter
   a1.display();                                                    // Display the value of 'a'
   cout << "\nThe value we get from using getter is " << a1.geta(); // Print value using getter
   return 0;                                                        // Indicate successful program termination
}
#include <iostream>   // For input and output
#include <string>     // For using string data type
using namespace std;

// Structure to store address details
struct Address {
    string City;      // City name
    string Country;   // Country name
};

// Structure to store contact information
struct Contact_Info {
    string Name;         // Person's name
    string Phone_No;     // Person's phone number
    Address address;     // Nested structure (Address inside Contact_Info)
};

int main() {

    Contact_Info people[10];   // Array of 10 Contact_Info structures
    
    cout << "Enter contact information for 10 people:\n";
    cout << "========================================\n";
    
    // Loop to input data (currently running 2 times)
    for(int i = 0; i < 2; i++) {
        cout << "\n--- Person " << (i+1) << " ---\n";
        
        cout << "Enter Name: ";
        getline(cin, people[i].Name);   // Input name
        
        cout << "Enter Phone Number: ";
        getline(cin, people[i].Phone_No);   // Input phone number
        
        cout << "Enter City: ";
        getline(cin, people[i].address.City);   // Input city (nested structure)
        
        cout << "Enter Country: ";
        getline(cin, people[i].address.Country);   // Input country (nested structure)
    }
    
    cout << "\n\n========================================\n";
    cout << "COMPLETE CONTACT INFORMATION FOR 10 PEOPLE\n";
    cout << "========================================\n\n";
    
    // Loop to display data (currently running 2 times)
    for(int i = 0; i < 2; i++) {
        cout << "Person " << (i+1) << ":\n";
        cout << "Name: " << people[i].Name << endl;
        cout << "Phone Number: " << people[i].Phone_No << endl;
        cout << "City: " << people[i].address.City << endl;
        cout << "Country: " << people[i].address.Country << endl;
        cout << "------------------------\n";
    }
    
    return 0;   // End program
}
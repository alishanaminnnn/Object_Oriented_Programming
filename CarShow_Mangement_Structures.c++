#include <iostream>   // For input and output
#include <string>     // For using string data type
using namespace std;

// Structure to store car details
struct Car
{
    string Model;   // Car model name
    int Year;       // Manufacturing year
    float Price;    // Car price
};

int main()
{
    Car showroom[3];   // Array of 3 Car structures

    // Loop to input data for 3 cars
    for (int i = 0; i < 3; i++)
    {
        cout << "------ Car " << i + 1 << " ------" << endl;

        cout << "Model: ";
        getline(cin, showroom[i].Model);   // Take full model name (including spaces)

        cout << "Year: ";
        cin >> showroom[i].Year;   // Input manufacturing year

        cout << "Price: ";
        cin >> showroom[i].Price;  // Input price

        cin.ignore();   // Clear leftover newline from input buffer
    }

    cout << "\nCars with price above 500,000:\n";

    // Loop to display cars with price greater than 500,000
    for (int i = 0; i < 3; i++)
    {
        if (showroom[i].Price > 500000)
        {
            cout << "\nModel: " << showroom[i].Model << endl;
            cout << "Year: " << showroom[i].Year << endl;
            cout << "Price: " << showroom[i].Price << endl;
        }
    }

    return 0;   // End program
}
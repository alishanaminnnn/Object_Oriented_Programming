#include <iostream>   // For input and output
#include <iomanip>    // For formatting output (fixed, setprecision)
using namespace std;

// Structure to store Employee information
struct Employee
{
    char employeeName[50];   // Employee name (character array)
    char jobTitle[30];       // Job title (character array)
    int employeeCode;        // Unique employee code
    int monthCount;          // Number of months (1–5)
    float monthlySalary[5];  // Array to store monthly salaries
    float *base_address;     // Pointer to store base address of salary array
};

// Function to calculate and display payroll details
void calculate_display_Payroll(Employee *ptr, float extraAmount)
{
    float sum = 0.0, average, highest;

    // Assume first salary as highest initially
    highest = ptr->monthlySalary[0];

    // Loop to calculate sum and find highest salary
    for (int i = 0; i < ptr->monthCount; i++)
    {
        sum += ptr->monthlySalary[i];

        if (ptr->monthlySalary[i] > highest)
            highest = ptr->monthlySalary[i];
    }

    average = sum / ptr->monthCount;           // Calculate average salary
    float finalAverage = average + extraAmount; // Add extra amount to average

    cout << "\n=========== Payroll Details ===========\n";
    cout << "Employee Name  : " << ptr->employeeName << endl;
    cout << "Job Title      : " << ptr->jobTitle << endl;
    cout << "Employee Code  : " << ptr->employeeCode << endl;

    cout << "\nMonthly Salaries:\n";

    // Display salaries using pointer arithmetic
    for (int i = 0; i < ptr->monthCount; i++)
    {
        cout << " Month " << i + 1 << ": "
             << fixed << setprecision(2)
             << *(ptr->base_address + i) << endl;  // Access using base address pointer
    }

    cout << "\nAverage Salary        : " << fixed << setprecision(2) << average << endl;
    cout << "Highest Salary        : " << fixed << setprecision(2) << highest << endl;
    cout << "Final Average Salary  : " << fixed << setprecision(2) << finalAverage << endl;
}

int main()
{
    Employee e;              // Create structure variable
    Employee *ptr = &e;      // Pointer to structure
    float extraAmount;       // Extra bonus amount

    cout << "Enter Employee Name: ";
    cin.getline(ptr->employeeName, 50);  // Input full name

    cout << "Enter Job Title: ";
    cin.getline(ptr->jobTitle, 30);      // Input job title

    cout << "Enter Employee Code: ";
    cin >> ptr->employeeCode;

    // Validate month count (must be between 1 and 5)
    do
    {
        cout << "Enter number of months (1 to 5): ";
        cin >> ptr->monthCount;
    } while (ptr->monthCount < 1 || ptr->monthCount > 5);

    // Input monthly salaries (must be positive)
    for (int i = 0; i < ptr->monthCount; i++)
    {
        do
        {
            cout << "Enter salary for month " << i + 1 << ": ";
            cin >> ptr->monthlySalary[i];
        } while (ptr->monthlySalary[i] < 0);
    }

    // Store base address of salary array into pointer member
    ptr->base_address = ptr->monthlySalary;

    cout << "Enter Extra Amount: ";
    cin >> extraAmount;

    // Call payroll calculation function
    calculate_display_Payroll(ptr, extraAmount);

    return 0;   // End program
}
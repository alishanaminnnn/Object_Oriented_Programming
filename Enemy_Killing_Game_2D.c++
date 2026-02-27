#include <iostream>   // For input and output
using namespace std;

int main()
{
    int row = 3, colums = 3, killCounter = 0;  // 3x3 grid and counter for kills

    // Dynamically creating 2D boolean array
    bool **twoDarray = new bool *[row];  // Create array of row pointers

    for (int i = 0; i < colums; i++)
    {
        twoDarray[i] = new bool[colums];  // Allocate columns for each row
    }

    cout << "-----Deploy Enemies(1s are Alive and 0s are Dead)-----" << endl;

    // Taking enemy deployment input
    for (int i = 0; i < row; i++)
    {
        if (i == 0)   // First row
        {
            cout << endl << "Deploy Enemy for First Row " << endl;

            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    cout << "row(1x1):";
                    cin >> twoDarray[i][j];
                }
                else if (j == 1)
                {
                    cout << "row(1x2):";
                    cin >> twoDarray[i][j];
                }
                else
                {
                    cout << "row(1x3):";
                    cin >> twoDarray[i][j];
                }
            }
        }

        else if (i == 1)   // Second row
        {
            cout << endl << "Deploy Enemy For Second Row " << endl;

            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    cout << "row(2x1):";
                    cin >> twoDarray[i][j];
                }
                else if (j == 1)
                {
                    cout << "row(2x2):";
                    cin >> twoDarray[i][j];
                }
                else
                {
                    cout << "row(2x3):";
                    cin >> twoDarray[i][j];
                }
            }
        }
        else   // Third row
        {
            cout << endl << "Deploy Enemy For Third Row " << endl;

            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    cout << "row(3x1):";
                    cin >> twoDarray[i][j];
                }
                else if (j == 1)
                {
                    cout << "row(3x2):";
                    cin >> twoDarray[i][j];
                }
                else
                {
                    cout << "row(3x3):";
                    cin >> twoDarray[i][j];
                }
            }
        }
    }

    char kill;
    cout << endl << "Enter K to kill:";
    cin >> kill;

    // If user presses K or k, kill all alive enemies
    if (kill == 'k' || kill == 'K')
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < colums; j++)
            {
                if (twoDarray[i][j] == 1)   // If enemy is alive
                {
                    twoDarray[i][j] == 0;   // Attempt to mark as dead
                    killCounter++;          // Increase kill count
                }
            }
        }
    }
    else
    {
        cout << "Mission Fail";
    }

    cout << "You Have Successfully Killed " << killCounter << " Enemies";

    return 0;   // End program
}
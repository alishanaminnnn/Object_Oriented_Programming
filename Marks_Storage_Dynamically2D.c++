#include<iostream>   // For input and output
using namespace std;

int main(){

int rows=3,columns=3;   // 3 campuses (rows) and 3 subjects (columns)

// Dynamically creating 2D array
int **twoDarray=new int*[rows];   // Create array of pointers (rows)

for (int i = 0; i < rows; i++)
{
   twoDarray[i]=new int[columns];   // Create columns for each row
}

// Taking input campus wise
for (int i = 0; i < rows; i++)
{
    if(i==0){   // First campus
        cout<<"Peshawar Campus "<<endl;

        for (int j = 0; j < 3; j++)
        {
        if (j==0)
        {
            cout<<"Enter Marks for CS:";
            cin>>twoDarray[i][j];
        }
        else if (j==1)
        {
            cout<<"Enter Marks for DS:";
            cin>>twoDarray[i][j];
        }
        else
        {
            cout<<"Enter Marks for SE:";
            cin>>twoDarray[i][j];         
        }
        }
    } // First campus finished 

    else if(i==1){   // Second campus
        cout<<endl<<"Islamabad Campus "<<endl;

        for (int j = 0; j < 3; j++)
        {
        if (j==0)
        {
            cout<<"Enter Marks for CS:";
            cin>>twoDarray[i][j];
        }
        else if (j==1)
        {
            cout<<"Enter Marks for DS:";
            cin>>twoDarray[i][j];
        }
        else
        {
            cout<<"Enter Marks for SE:";
            cin>>twoDarray[i][j];         
        }
        }  
    } // Second campus    

    else   // Third campus
    {
        cout<<endl<<"Karachi Campus "<<endl;

        for (int j = 0; j < 3; j++)
        {
        if (j==0)
        {
            cout<<"Enter Marks for CS:";
            cin>>twoDarray[i][j];
        }
        else if (j==1)
        {
            cout<<"Enter Marks for DS:";
            cin>>twoDarray[i][j];
        }
        else
        {
            cout<<"Enter Marks for SE:";
            cin>>twoDarray[i][j];         
        }
        } 
    } 
}

// Displaying marks in table format
cout<<"\t  CS-----DS-----SE"<<endl;

for (int i = 0; i < rows; i++)
{
    if (i==0)
    {
        cout<<"Peshawar  ";
        for (int j = 0; j < rows; j++)
        {
            cout<<twoDarray[i][j]<<"\t";   // Print marks
        }
        cout<<endl;
    }
    else if (i==1)
    {
        cout<<"Islamabad ";
        for (int j = 0; j < rows; j++)
        {
            cout<<twoDarray[i][j]<<"\t";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Karachi   ";
        for (int j = 0; j < rows; j++)
        {
            cout<<twoDarray[i][j]<<"\t";
        }
        cout<<endl;
    }
}

// Deallocating memory (very important in dynamic arrays)
for (int i = 0; i < 3; i++)
{
    delete[] twoDarray[i];   // Delete each row
}
delete[] twoDarray;   // Delete array of pointers

return 0;   // End program
}
#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;

    student()
    {
        name = "Epstein";
    }

    student(string n)
    {
        name = n;
    }
};

int main(){
    student s[] = {"ali","shan","amin"};
    return 0;
}
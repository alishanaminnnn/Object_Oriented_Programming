#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << name << endl;
    }
};

int main() {
    Student *s[3];  // array of pointers

    // creating objects dynamically
    s[0] = new Student("Ali");
    s[1] = new Student("Shan");
    s[2] = new Student("Amin");

    // accessing objects
    for(int i = 0; i < 3; i++) {
        s[i]->display();   // use -> because pointer
    }

    // deleting objects
    for(int i = 0; i < 3; i++) {
        delete s[i];
    }

    return 0;
}
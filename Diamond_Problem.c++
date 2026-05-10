#include<iostream>
using namespace std;

class School{// Base Class
    public:
    School()
    {
        cout<<"Constructor S\n";
    }
    void display()
    {
        cout<<"Diamond Problem\n";
    }
};
class Room1: public School{
    public:
    Room1()
    {
        cout<<"Constructor 1\n";
    }
};
class Room2: public School{
    public:
    Room2()
    {
        cout<<"Constructor 2\n";
    }
};
class Room3: public Room1,public Room2{
    public:
    Room3()
    {
        cout<<"Constructor 3\n";
    }
};
int main(){
    Room3 r;//The constructor will be called in this manner(Diamond Problem)
// Constructor S
// Constructor 1
// Constructor S
// Constructor 2
// Constructor 3
    // r.display(); This line will cause error because the compiler is confused to chose the b/w 
    //room1 and room2


    return 0;
}


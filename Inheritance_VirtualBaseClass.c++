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
class Room1: virtual public School{//virtual Base class is made
    public:
    Room1()
    {
        cout<<"Constructor 1\n";
    }
};
class Room2: virtual public School{//virtual Base class is made
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
    Room3 r;//The constructor will be called in this manner
// Constructor S
// Constructor 1
// Constructor 2
// Constructor 3
    r.display(); //This line will now run because the both classes room1 and room2
    //will share one class


    return 0;
}


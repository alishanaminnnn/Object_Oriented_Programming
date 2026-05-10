#include<iostream>
using namespace std;

class Animal{// Virtual Base Class
    public:
    virtual void sound(){
        cout<<"This is Virtual Base Class";
    }
};
class Dog: public Animal{
    public:
    void sound(){
        cout<<"Dog Barks\n";
    }
};
int main(){
    Animal *ptr;
    Dog d;
    ptr=&d;
    ptr->sound();//sound function from Dog class will be called
    d.sound();//same as above
    Animal a2;
    a2.sound();//base calss will be called

    return 0;
}

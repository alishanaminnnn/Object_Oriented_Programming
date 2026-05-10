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
class Cat: public Animal{
    public:
    void sound(){
        cout<<"cat meow\n";
    }
};
int main(){
 Animal *ptr[2];
 ptr[0]=new Dog;
 ptr[1]=new Cat;
 ptr[0]->sound();
 ptr[1]->sound();
    return 0;
}

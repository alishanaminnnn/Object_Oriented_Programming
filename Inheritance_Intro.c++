#include<iostream>
using namespace std;

class Animal{//Base Class
    public:
    void Display(){
        cout<<"This is the function of Base Class!";
    }
};

class Dog: public Animal{//Derived Class
    public:
    void Bark(){
        cout<<"\nThis is the function of Derived Class!";
    }
};

int main(){
    Dog d1;
    d1.Display();
    d1.Bark();
    return 0;
}
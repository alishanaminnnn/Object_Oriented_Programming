#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;

    ptr = &obj;
    ptr->show();  // ❌ Calls Base version

    return 0;
}
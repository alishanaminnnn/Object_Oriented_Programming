#include<iostream>
#include<cstring>
using namespace std;

class Student{
    
    char *Name;
    public:
    Student(const char*s)
    {
        Name=new char[strlen(s)+1];
        strcpy(Name,s);
    }
    Student(const Student &s)//copy constructor(Deep copy)
    {
        Name= new char[strlen(s.Name)+1];
        strcpy(Name,s.Name);
        
    }
    void setname(const char *s)//setter
    {
        strcpy(Name,s);
    }
    ~Student()//destructor
    {
        delete[] Name;
    }
    void display()//displaying student info
    {
        cout<<"Name: "<<Name<<"\n";
    }

};
int main(){
    Student s1("alishan");
    Student s2=s1;
    s1.display();
    s2.display();
    s1.setname("amin");
    s1.display();
    s2.display();
    return 0;
}
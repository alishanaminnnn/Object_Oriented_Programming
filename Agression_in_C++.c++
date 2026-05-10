#include<iostream>
using namespace std;

class school{
    public:
    string name;
    school(string n): name(n){}
};
class section{
    public:
    string sectionName;
    school *c;
    section(string n,school *s): sectionName(n),c(s){
        cout<<c->name<<" has a department named "<<sectionName;
    }
};
int main(){
    school s("ELysian");
    section se("CS",&s);
    return 0;
}
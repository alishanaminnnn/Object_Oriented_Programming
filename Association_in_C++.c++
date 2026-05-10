#include<iostream>
using namespace std;

class student{
    public:
    string name;
    student(string n): name(n){}

};
class teacher{
    string teacherName;
    public:
    teacher(string t,student s):teacherName(t){
        cout<<t<<" is teaching "<<s.name;
    }
};
int main(){
    student s("alishan");
    teacher("Zulqarnain",s);
    

}
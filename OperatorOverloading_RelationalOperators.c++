#include<iostream>
using namespace std;

class Student{
   string Name;
   int marks;
   public:
   Student(string n,int m):Name(n),marks(m){}
   bool operator>(const Student &ss){
      if (marks>ss.marks)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
   bool operator==(const Student &ss){
      if (marks==ss.marks)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
};

int main(){
Student s1("Alishan",22);
Student s2("Amin",34);
if (s1>s2)
{
   cout<<"Alishan passed";
}
else if (s1==s2)
{
   cout<<"Both passed";
}
else
{
   cout<<"Amin passed";
}
   return 0;
}
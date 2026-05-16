#include<iostream>
using namespace std;

class Student{
   string name;
   int marks[5];
   public:
   Student(string n,int m[]){
      name=n;
      for (int i = 0; i < 5; i++)
      {
         marks[i]=m[i];
      } 
   }
   int& operator[](const int x){
      return  marks[x];
   }
};
int main(){
   int q[]={1,2,3,4,5};
   Student s1("alishan",q);
   cout<<s1[1];

   
   return 0;
}
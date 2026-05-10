#include<iostream>
using namespace std;

class school{
    public:
    void purpose(){
        cout<<"To get Education";
    }

};
class section{
    public:
    school s;
    void name(){
        cout<<"Why?"<<endl;
    s.purpose(); 
   }


};
int main(){
    section st;
    st.name();

    return 0;
}
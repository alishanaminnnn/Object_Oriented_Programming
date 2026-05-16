#include<iostream>
using namespace std;

class addition{
   public:
   int apple;
   int ball;
   public:
   addition():apple(0),ball(0){}
   addition(int a,int b):apple(a),ball(b){}
   addition operator+(addition a){
    addition temp;
   	temp.apple=apple+a.apple;// apple is representing a1
   	temp.ball=ball+a.ball;
   	return temp;
   }
};

int main(){
	addition a1(21,22);
	addition a2(23,24);
	addition a3=a1+a2;
	cout<<a3.apple;
	return 0;
}

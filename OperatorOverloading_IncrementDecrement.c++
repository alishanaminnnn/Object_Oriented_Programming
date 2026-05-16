#include<iostream>
using namespace std;

class increment{
   public:
   int apple;
   int ball;
   public:
   increment():apple(0),ball(0){}
   increment(int a,int b):apple(a),ball(b){}
   void operator++(int){//Post Fix i++
      apple+=1;
      ball+=1;
   }
   void operator++(){//Pre Fix ++i
      apple+=1;
      ball+=1;
   }


};
int main(){
   increment i(2,3);
   i++;
   cout<<"Value of Apple O1: "<<i.apple;
   increment j(2,3);
   ++j;
   cout<<"\nValue of Apple O2: "<<j.apple;
   
   return 0;

}
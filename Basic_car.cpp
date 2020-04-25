#include<iostream>
using namespace std;
class Basic_Car{
    public :
     virtual void start(){
        cout<<"Basic Car is started"<<endl;
    }
};
class Advanced_Car:public Basic_Car{
      public:
       void start(){
           cout<<"Advanced car started"<<endl;
       }
};
  int main(){
      Advanced_Car a;
      Basic_Car *b=&a;
      b->start();
      a.start();
  }
#include<iostream>
using namespace std;
class Test;
  class A{
        int a;
        protected :
        int b;
        public:
        int c;
    friend void x();  //friend function is allow to access the private and protected variable a & b 
      friend Test;    // friend class can access the private and protected member of class A
  };
      void x(){
          A m;
      m.a=10;
      m.b=10;
      m.c=10;
  }
  class Test{
      A n;
      void fun(){
      n.a=20;
      n.b=20;
      n.c=20;}
  };
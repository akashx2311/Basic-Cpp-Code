#include<iostream>
using namespace std;
//concrete class
 class Base{
     public:
      void fun1(){
          cout<<"function of concrete class"<<endl;
      }

 };
 //interface class
 class Interface{
     public:
      virtual void fun1()=0;
      virtual void fun2()=0;
      
 };
 //abstract class
 class Abstract:public Interface {
     public :
     void fun1(){
         cout<<"implementation of fun1 in Abstract class"<<endl;
     }
  void fun2(){
         cout<<"fun2 implementation in Abstract_implement class"<<endl;
     }
 };
 class Abstract_implement:public Abstract{
     public :
     void fun1(){
         cout<<"implementation of fun1 in Abstract_implement class"<<endl;
     }
     void fun2(){
         cout<<"fun2 implementation in Abstract_implement class"<<endl;
     }

 };
 int main(){
     Abstract *a1;
     Abstract_implement a;
     a1=&a;
     a1->fun1();
     a.fun2();
     a1->fun2();
     return 0;
}
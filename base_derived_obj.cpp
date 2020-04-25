#include<iostream>
using namespace std;
class Base{
    public:
     void fun1(){
         cout<<"fun1 of Base class"<<endl;
     }
};
class Derived :public Base{
    public :
    void fun2(){
        cout<<"fun2 of derived class"<<endl;
    }
};
int main(){
    Derived b,*ptr1;
    Base d;
    Base *ptr=&b;
    ptr->fun1();
    ptr1=&d;
    return 0;
}
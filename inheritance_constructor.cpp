#include<iostream>
using namespace std;
class Base{
    public:
   Base(){
       cout<<"Base class non parameterised constructor"<<endl;
   }   
   Base(int x){
       cout<<"Base class parameterised constructor"<<x<<endl;
   }
};
class Derived:public Base{
     public:
     Derived():Base(){
         cout<<"Derived class Non parameterised constructor"<<endl;
     }
     Derived(int x):Base(x){
         cout<<"Derived class Parameterised constructor"<<x<<endl;
     }
     Derived(int x,int y):Base(x)
     {
         cout<<"Derived class two para args "<<x<<" "<<y<<endl;
     }

};
int main(){
    //Base b(20);
      Derived d(10);
}
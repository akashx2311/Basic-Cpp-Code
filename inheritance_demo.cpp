#include<iostream>
using namespace std;
class Base{

       public:
       int a=10;
         void Disp(){
             cout<<"Display of Base"<<a<<endl;
         }
};
class Derived : public Base{
    public:
    void Disp(){
        a=100;
        cout<<"Dispaly of Derived "<<a<<endl;
    }
      
};
int main(){
    Derived b;
    b.Disp();
}
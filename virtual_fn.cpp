#include<iostream>
using namespace std;
class Base{
    public:
    //without virtual it will print the Base class content 
   virtual void Display(){
        cout<<"inside the Base class"<<endl;
    }
};
class Derive :public Base{
    public:
      void Display(){
          cout<<"Inside the Derive Class"<<endl;
      }
};
int main(){
    Derive d;
    Base *b=&d;
    //to print the Derive class content at the time of Base pointer and Derive Object case we need to use of virtual keyword 
      b->Display();
}

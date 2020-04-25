#include<iostream>
using namespace std;
class Innova{
      public:
      static int price;
      void function(){

      }
      static int getPrice(){
          return price;
      }
};
int  Innova::price=20;
int main(){
    Innova i1,i2;
    cout<<i1.getPrice()<<endl;
    cout<<Innova::getPrice()<<endl;
}

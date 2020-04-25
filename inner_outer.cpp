#include<iostream>
using namespace std;
class outer{
   public:
    int a=10;
   void Dispaly(){
        cout<<"value of a"<<a<<endl;
         i.show();

   }
   class Inner{
          public:
          int b=20;
          void show(){
              cout<<"value of inner class b: "<<b<<endl;
          }
   };
   Inner i;
};
int main(){
   outer o;
   o.Dispaly();
}
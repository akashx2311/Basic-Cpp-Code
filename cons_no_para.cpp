#include<iostream>
   using namespace std;
  class rect{
   private:
   float len,bre;
   public:
    rect();
    float area(){
    return len*bre;
    }
   float peri(){
     return 2*(len+bre);
   }
};
   rect::rect(){
     len=0,bre=0;}
   int main(){
    rect r1;
    cout<<r1.area()<<endl;
return 0;
}
   

#include<iostream>
   using namespace std;
  class rect{
   private:
   float len,bre;
   public:
    rect(float a,float b);
    float area(){
    return len*bre;
    }
   float peri(){
     return 2*(len+bre);
   }
};
   rect::rect(float x,float y){
     len=x,bre=y;}
   int main(){
    rect r1(10.2,15.5);
    cout<<r1.area()<<endl;
return 0;
}
   

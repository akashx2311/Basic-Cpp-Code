#include<iostream>
 using namespace std;
  class Rectangle{
   public:
      int l,b;
   int area(){
 return l*b;
}
  int perimeter(){
   return 2*(l+b);}
};
  int main(){
   Rectangle r1;
   r1.l=10;
   r1.b=5;
  cout<<"area of the rectangle is:"<<r1.area()<<endl;
  cout<<"perimeter of the rectangle is :"<<r1.perimeter()<<endl;
return 0;
}

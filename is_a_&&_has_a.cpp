#include<iostream>
using namespace std;
class Table{
    public:
     int leg_size;
     int space_occupied(Rect r,int leg_size){
         return r.area()*leg_size;
     }
};
class Rect{
    public:
     int l,b;
     Rect(int x=0,int y=0){
         l=x;
         b=y;
     }
     int area(){
         return l*b;
     }
};
class cuboid:public Rect{
     public:
     int h;
     cuboid(int z){
         h=z;
     }
     int volume(){
         return l*b*h;
     }
};
int main()
{
    Rect r(5,10);
    cuboid c(7);
    cout<<c.volume()<<endl;
   return 0;
}
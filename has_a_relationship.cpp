#include<iostream>
using namespace std;
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
class Table{
    public:
     int leg_size;
     int space_occupied(Rect r,int leg_size){
         return r.area()*leg_size;
     }
};

class cuboid:public Rect{
     public:
     int h;
     cuboid(Rect r,int z){
         l=r.l;
         b=r.b;
         h=z;
     }
     int volume(){
         return l*b*h;
     }
};
int main()
{
    Rect r(5,10);
    cuboid c(r,7);
    Table t;
    t.leg_size=15;
    cout<<t.space_occupied(r,15)<<endl;
    cout<<r.area()<<endl;
   return 0;
}
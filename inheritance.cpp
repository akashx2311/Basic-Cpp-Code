#include<iostream>
 using namespace std;
 class Rect{
       private:
        int l,b;
        public:
        void setDim(int x,int y)
        {
            l=x;
            b=y;
        }
        int showBreadth(){
            return b;
        }
        int showLength(){
            return l;
        }
        Rect(int x=0,int y=0){
            l=x;
            b=y;
        }
        int area(){
              return l*b;
        }
        int perimeter(){
            return 2*(l+b); 
        }
 };
 class Cuboid :public Rect{
     public:
     int h;
     Cuboid(int x=0,int y=0,int z=0){
         setDim(x,y);
         h=z;
     }
     int Surface_area(){
          return 2*(showLength()*showBreadth()+showBreadth()*h+h*showLength());
     }
     int volume(){
         return showLength()*showBreadth()*h;
     }
 };
 int main(){
       Rect r1(12,10),r2(20,10);
       cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
       cout<<r2.area()<<endl;
      Cuboid c1(12,10,5),c2(201,10,7);
      cout<<"volume of inherit cuboid is:"<<c1.Surface_area()<<endl;
      cout<<"volume of 2nd inherit cuboid is:"<<c2.volume()<<endl;

 }
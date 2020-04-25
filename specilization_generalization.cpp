#include<iostream>
#include<math.h>
using namespace std;
class shape{

    int l,b,h;
    public:
    void setDim(float x=0,float y=0,float z=0){
        l=x;
        b=y;
        h=z;
    }
     float getLength(){
         return l;
     }
     float getBreadth(){
         return b;
     }
     float getHeight(){
         return h;
     }
    float area();
    float perimeter();

};
class Rectangle:public shape{
    public:
    float area(){
        return getLength()*getBreadth();
    }
     float perimeter(){
         return 2*(getLength()+getBreadth());
     }
};
class Triangle:public shape{
    public:
      float s=(getLength()+getHeight()+getBreadth())/2;
    float area(){
        return sqrt(s*(s-getLength())*(s-getBreadth())*(s-getHeight()));
    }
    float perimeter(){
        return round(s);
    }
};
int main(){
    Rectangle r;
    Triangle t;
     r.setDim(10,5);
     t.setDim(3.0f,3.0f,3.0f);
     cout<<r.area()<<endl;
     cout<<t.perimeter()<<endl;
}
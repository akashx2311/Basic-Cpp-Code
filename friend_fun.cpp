#include<iostream>
using namespace std;
   class complex{
      int real,img;
      public:
    complex(int r=0, int i=0){
      real=r;
       img=i;}
   friend  complex operator+(complex c1,complex c2);
    void Disp(){
         cout<<real<<"+i"<<img<<endl;
}
    };

   complex operator+(complex c1,complex c2)
      {
        complex t;
        t.real=c1.real+c2.real;
        t.img=c1.img+c2.img;
      return t;}
   int main(){
   complex c1(10,12),c2(12,13),c3;
     c3 =c1+c2;
    c1.Disp();
    c2.Disp();
   c3.Disp();
return 0;
} 

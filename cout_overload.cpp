#include<iostream>
 using namespace std;
  class complex{
      int real,img;

    public:
      complex(int r=0,int i=0){
        real=r;
         img=i;
          
      }
        void Disp(){
            cout<<real<<"+i"<<img<<endl;
        }
      friend ostream & operator<<( ostream &out, complex &c1);
      friend complex operator+(complex c1,complex c2);
  };
  ostream & operator <<(ostream &out,complex &c )
{
      out<<c.real<<"+i"<<c.img;
      return out;
}       
   complex operator+(complex x,complex y)
   {
     complex t;
      t.real=x.real+y.real;
      t.img=x.img+y.img;
      return t;
   }

   int main(){
         complex c1(10,12),c2(12,15),c3;
            c3=c1+c2;
            cout<<c1<<endl;
            cout<<c2<<endl;
             cout<<c3<<endl;
            return 0;
   }
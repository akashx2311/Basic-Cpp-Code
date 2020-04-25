#include<iostream>
 using namespace std;
  class complex{
      int real,img;
     public:
      complex(int r=0,int i=0){
         real=r;
         img=i;
       }
    complex operator+(complex x){
        complex temp;
           temp.real=real+x.real;
           temp.img=img+x.img;
          return temp;
      }
     void Disp(){
           cout<<real<<"+i"<<img<<endl;}
  };
   int main(){
    complex c1(8,10),c2(12,11),c3;
    cout<<"c1=";c1.Disp();
    cout<<endl;
    cout<<"c2=";c2.Disp();
    cout<<endl;
     cout<<"c3="; 
    c3=c1+c2;
    c3.Disp();
return 0;
}

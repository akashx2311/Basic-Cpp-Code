#include<iostream>
using namespace std;
 
class Rect{
   private:  
  int l,b;
  public:
   int area(){
    return l*b;
        }
  int per(){
   return 2*(l+b);
    }
  void dim(int a,int y){
    l=a;
    b=y;}
  void show(){
    cout<<l<<" "<<b<<endl;}
};

 int main(){
  Rect r;
  r.dim(10,2);
   r.show();
 //cout<<r.l<<endl;
}

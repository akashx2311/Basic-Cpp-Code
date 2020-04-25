#include<iostream>
 using namespace std;
  class rect{
    private:
    float length,width;
    public:
    void disp(){
       cout<<length<<" "<<width<<endl;
        }
rect(){ }
    rect(float length,float width){
         this->length=length;
         this->width=width;
         }
     };
   int main(){
  rect r1,r2(12,10);
   r1.disp();
  r2.disp();
 return 0;
}

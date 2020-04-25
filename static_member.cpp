#include<iostream>
using namespace std;
class Test{
     int a,b;
     public:
     static int count;
     Test(){
         a=10;b=20;
         count++;
     }
     static int getCount(){
        // a++;
         return count;
     }
};
 int Test::count=0;
int main(){
    Test t1;
    Test t2,t3,t4;
    cout<<Test::getCount()<<endl;
}
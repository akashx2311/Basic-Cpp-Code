#include<iostream>
 using namespace std;
 int g=0;
  void fun(){
    int g=5;
   cout<<g<<endl;
    }
int main(){
  int g=25;
   cout<<g<<endl;
   fun();
   cout<<::g<<endl;
return 0;}
  

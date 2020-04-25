#include<iostream>
  using namespace std;
   void fun(){
   static int k=10;
     k++;
 cout<<k<<" " <<endl;

}
 int main(){
  
fun();
fun();
return 0;
}

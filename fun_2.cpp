#include<iostream>
  using namespace std;
  int add(int a,int b)
{
  return a+b;
}
float add(float a,float b)
{
    return a+b;
}
   int main(){
      int a,b,c;
      cin>>a>>b;
     cout<<add(a,b);
     cout<<add(32.6f,12.5f);
return 0;}

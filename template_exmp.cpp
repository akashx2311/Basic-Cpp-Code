#include<iostream>
using namespace std;
  template <class t>
   t add(t a,t b)
    {
     return a+b;
}
  int main(){
    float a,b;
    cin>>a>>b;
   cout<<add(a,b);
return 0;
}

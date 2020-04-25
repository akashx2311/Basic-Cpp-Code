#include<iostream>
#include<math.h>
   using namespace std;
   int main(){
    float a,b,c,root1,root2;
    cout<<"enter the value of a,b & c: "<<endl;
     cin>>a>>b>>c;
     root1=(-b+sqrt(b*b-4*a*c))/(2*a);
     root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots of the equation is "<<root1<<" " <<root2<<endl;
   return 0;
}

#include<iostream>
  using namespace std;
   int main(){
    float u,v,a,speed;
    cout<<"enter the value of u,v,a "<<endl;
    cin>>u>>v>>a;
   speed=(v*v-u*u)/(2*a);
    cout<<"speed: "<<speed<<endl;
 return 0;
}

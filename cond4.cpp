#include<iostream>
  using namespace std;
  int main(){
   int a,b;float c;
   cout<<"enter 2 numbers: "<<endl;
   cin>>a>>b;
   if(b==0)
    cout<<"Error! Divison by Zero "<<endl;
   else
 {
    c=(float)a/b;
    cout<<c<<endl;
}
return 0;
}
 

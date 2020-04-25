#include<iostream>
  using namespace std;
 int addition(int a=0,int b=0,int c=0,int d=0)
     { return a+b+c+d;
     }
   int main(){
    int a,b,c,d;
   cin>>a>>b>>c>>d;
    cout<<addition(a,b,c,d)<<endl;
    cout<<addition(a,b,c)<<endl;
    cout<<addition(a,b)<<endl;
     cout<<addition(a)<<endl;
return 0;

}

#include<iostream>
  using namespace std;
  int maxim(int a=0,int b=0,int c=0)
   {
    return a>b && a>c?a:b>c?b:c;
  }
  int main(){
   int a,b,c;
   cin>>a>>b>>c;
   cout<<maxim(a,b,c)<<endl;
  cout<<maxim(a,b)<<endl;
   cout<<maxim(a)<<endl;
   cout<<maxim()<<endl;
return 0;
}

#include<iostream>
  using namespace std;
    int max(int a, int b){
     return a>b?a:b;
}
int min(int a,int b){
   return a<b?a:b;
}

  int main(){
    int (*fp)(int,int);
    fp=max;
   int k;
  k=fp(10,13);
   cout<<k<<endl;
    fp=min;
   k=fp(10,13);
   cout<<k<<endl;
return 0;
} 

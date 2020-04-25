#include<iostream>
  using namespace std;
  int * arr(int size){
    int *p=new int[size];
    for(int i=0;i<size;i++)
       p[i]=i*i;
    return p;
}
  int main(){
   int n;
   cout<<"enter the size of the array:" <<endl;
    cin>>n;
   int *k;
    k=arr(n);
  for(int i=0;i<n;i++)
     cout<<k[i]<<" ";
   cout<<endl;
return 0;
}

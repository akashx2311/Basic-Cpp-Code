#include<iostream>
  using namespace std;
  int main(){
    int n,fact=1 ;
 cout<<"enter the no. whos factorial wants to calculate"<<endl;
    cin>>n;
   for(int i=1;i<=n;i++)
     fact=fact*i;
    cout<<n<<"!"<<"="<<fact<<endl;
  return 0;
}


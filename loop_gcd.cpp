#include<iostream>
  using namespace std;
  int main(){
    int n,m;
    cin>>n>>m;
   while(n!=m)
    {
     if(n>m)
      n=n-m;
     else
      m=m-n;
  }
    cout<<"gcd is  "<<n<<endl;
return 0;
}

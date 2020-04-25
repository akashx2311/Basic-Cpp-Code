#include<iostream>
#include<math.h>
   using namespace std;
   int main(){
   int n,count=0;
   cout<<"enter a no."<<endl;
    cin>>n;
   for(int i=1;i<=n;i++)
        if(n%i==0)
         count++;
     if(count==2)
      cout<<"No. is prime no."<<endl;
     else 
      cout<<"No. is not a prime no."<<endl;
   return 0;
}


#include<iostream>
   using namespace std;
 int main(){
     int n,sum=0;
    cout<<"enter the size of the array:"<<endl;
     cin>>n;
   int arr[n];
     cout<<"enter array elements:"<<endl;
     for(auto& x:arr)
       cin>>x;
     for(auto x:arr)
       sum=sum+x;
     cout<<"sum of the array element is: "<<sum<<endl;

       return 0;
}

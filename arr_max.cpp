#include<iostream>
#include<climits>
  using namespace std;
  int main(){
   int n;
   cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int arr[n],max=INT_MIN;
     cout<<"enter the array element: "<<endl;
      for(auto& x:arr)
        cin>>x;
      for(auto x:arr)
      if(max<x)
         max=x;
     cout<<"Maximum element of the array is :"<<max<<endl;
    return 0;
}

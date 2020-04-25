#include<iostream>
#include<climits>
  using namespace std;
  int main(){
   int n;
 cout<<"enter the size of the array element:"<<endl;
    cin>>n;
   int arr[n],min=INT_MAX;
    cout<<"enter the array element:"<<endl;
     for(auto& x:arr)
        cin>>x;
    for(auto x:arr)
     if(min>x)
       min=x;
    cout<<"minimum element of the array is: "<<min<<endl;
return 0;
} 
      
     

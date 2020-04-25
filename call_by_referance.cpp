#include<iostream>
  using namespace std;
  void swap(int &a,int &b){
     int temp;
     temp=a;
     a=b;
     b=temp;
}
  int main(){
   int x,y;
  cin>>x>>y;
   cout<<"----------------call_by_referance----------------"<<endl;
   cout<<"before swapping: "<<x<<" "<<y<<endl;    
    swap(x,y);
    cout<<"after swapping: "<<x<<" "<<y<<endl;
return 0;
}
    

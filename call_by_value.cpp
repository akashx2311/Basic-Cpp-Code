#include<iostream>
 using namespace std;

  void swap(int a,int b){
    int temp;
      cout<<"----------------call by value-----------------"<<endl;
     cout<<"before swapping: "<<a<<" "<<b<<endl;
    temp=a;
    a=b;
  b=temp;
   cout<<"after swapping: "<<a<<" "<<b<<endl;
}
  int main(){
    int a,b;
     cin>>a>>b;
      swap(a,b);
return 0;
}
   

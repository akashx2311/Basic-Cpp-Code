#include<iostream>
using namespace std;
   int main(){
    int n,num=0;
    cout<<"enter a no."<<endl;
    cin>>n;
   while(n>0){
        num=num*10+n%10;
       n=n/10;

}
    cout<<"reversed no. is ="<<num<<endl;
return 0;
}

#include<iostream>
using namespace std;
 class phone{
public :
      string comp_Name,type,model;
      float price,weight;
      void detail(){
       cout<<"company Name:"<<comp_Name<<endl;
       cout<<"model:"<<model<<endl;
       cout<<"price:"<<price<<endl;
       cout<<"type:"<<type<<endl;
       cout<<"weight:"<<weight<<endl;
}
    };
int main(){
    phone  p1,p2,p3;
    p1.comp_Name="ASUS";
    p1.model="X00GD";
    p1.type="android";
    p1.price=9000.00;
    p1.weight=100.0;
    p1.detail();
   p2.comp_Name="samsung";
  p2.price=12000.00;
 p2.model="Galaxy J-7";
 p2.type="android";
p2.weight=150.0;
p2.detail();
 return 0;
}
       
    
    

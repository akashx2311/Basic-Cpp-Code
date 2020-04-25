#include<bits/stdc++.h>
#include<iostream>
  using namespace std;
class rational{
       private:
        int p,q;
        public:
          rational(int x=0,int y=0){
              p=x;
              q=y;
          }
          friend rational operator+(rational x,rational y);
          friend ostream & operator<<(ostream &out,rational &r);
          
};
   rational operator+(rational x,rational y){
           rational t;
             int lcm=(x.q * y.q)/__gcd(x.q,y.q);
             t.p=(lcm/x.q)*x.p+(lcm/y.q)*y.p;
             t.q=lcm;
             return t;
   }
   ostream & operator <<(ostream &out,rational &c )
{
      out<<c.p<<"/"<<c.q;
      return out;
} 
int main(){
      rational r1(12,20),r2(13,15),r3;
        //cout<<"enter the first rational number: r1="<<endl;
          // cin>>r1.p>>r1.q;
          r3=r1+r2;
          cout<<"r1="<<r1<<endl;
          cout<<"r2="<<r2<<endl;
          cout<<"r1+r2="<<r3<<endl;

}
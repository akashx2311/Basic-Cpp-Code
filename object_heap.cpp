#include<iostream>
 using namespace std;
  float interest=5.0;
  class Bank{
     public:
        float credit,debit;
       float check_balance(){
          return credit+credit*0.05-debit;}
};
      int main(){
     Bank *b=new Bank();
      cout<<"enter the amount credit to the A/C:"<<endl;
      cin>>b->credit;
      cout<<"enter the amount wants to withdraw from the A/C:"<<endl;
       cin>>b->debit;
    if(b->debit>b->credit)
       cout<<"Sorry!Insufficient Fund!"<<endl;
     else
      cout<<"Transction Successful!\n Current Balance in your A/C is:"<<b->check_balance()<<endl;
 return 0;
}

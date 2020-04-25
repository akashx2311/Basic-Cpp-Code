#include<iostream>
 using namespace std;
  class Bike{
 public:
    string model,comp_name;
  int mf_year,cc;
   Bike(string c,string m,int mf,int cc);
   Bike(Bike &b);
   void Details();
};
 Bike::Bike(Bike &b){
  mf_year= b.mf_year;
  model=b.model;
  comp_name=b.comp_name;
  cc=b.cc;
}
  void Bike::Details(){
    cout<<"------------Deatils of the Bike is-----------------"<<endl;
    cout<<"Company_Name: "<<comp_name<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Manufacturing Year: "<<mf_year<<endl;
    cout<<"CC: "<<cc<<endl;
}
   Bike::Bike(string x="Bajaj",string y="scooter",int z=1998,int k=150){
        model=x;
        comp_name=y;
        mf_year=z;
       cc=k;}

   int main(){
   Bike b1,b2,b3("Honda","Unicorn",2012,210),b4;
  b1.comp_name="Hero";
  b1.model="Super Spelender";
  b1.mf_year=2010;
  b1.cc=180;
  b1.Details();
  b2=Bike(b1);
  b2.Details();
  b3.Details();
  b4.Details();
  return 0;
}
   

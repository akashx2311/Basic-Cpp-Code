#include<iostream>
  using namespace std;
  class student{
     int roll,physics,chemistry,math;
     string name;
     public:
      student(int r,int p,int c,int m,string n)
      {
       roll=r;
       physics=p;
       chemistry=c;
       math=m;
       name=n;
        }
     int total_marks(int p,int c,int m){
         return p+c+m;
        }
     char grade(int n){
      if(n>90)
       return 'A';
       else if(n<=90 && n>80)
       return 'B';
        else if(n<=80 && n>70)
       return 'C';
       else if(n<=70 && n>60)
       return 'D';
       else
         return 'F';
        }
       void Disp(){
    cout<<"-----------------------Result--------------------------"<<endl;
          cout<<"Name:"<<name<<endl;
          cout<<"Roll:"<<roll<<endl;
          cout<<"Physics:"<<physics<<endl;
          cout<<"Chemistry:"<<chemistry<<endl;
          cout<<"Mathematics:"<<math<<endl;
           int t=total_marks(physics,chemistry,math);
          cout<<"Total Marks:"<<t<<endl;
          cout<<"Grade Obtained:"<<grade(t/3)<<endl;
         }
};
    int main(){
             int t;
            cout<<"enter the no. of the student:"<<endl;
             cin>>t;
while(t--){
            string name;
            int r,p,c,m;
          cout<<"enter the student details:"<<endl;
           cout<<"Name:"<<endl;
           cin>>name;
            cout<<"Roll:"<<endl;
           cin>>r;
           cout<<"Physics:"<<endl;
           cin>>p;
           cout<<"Chemistry:"<<endl;
            cin>>c;
           cout<<"Mathematics:"<<endl;
            cin>>m;
          student s1(r,p,c,m,name);
           s1.Disp();
           }
   return 0;
 }

     
   

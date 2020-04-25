#include<iostream>
using namespace std;
class Base{
      private:
        void private_disp()
        {
            cout<<"private display"<<endl;
        }
             
     public:
            void public_disp()
        {
                cout<<"public display"<<endl;
        }
     protected:
            void protected_disp()
        {
                cout<<"protected Display"<<endl;
        }
        
};
 class Derived:public Base{
       public:
          void private_disp(){
              cout<<"protected now become public"<<endl;
          }
 };
 int main(){
        Base b;
        Derived d;
        b.public_disp();
        d.public_disp();
        d.private_disp();
 }
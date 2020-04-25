#include<iostream>
using namespace std;
class Car{
      public :
       virtual void start(){
       cout<<"Car started"<<endl;
       }//if we assign start()=0,in the Base class then it will become pure virtual function
         /*
         pure virtual function.....
         virtual void start()=0;
         */
       virtual void stop(){
            cout<<"car stopped"<<endl;
        }
};
class Innova:public Car{
    public:
      void start(){
          cout<<"Innova started"<<endl;
      }
      void stop(){
          cout<<"Innova stopped"<<endl;
      }
};
class Swift:public Car{
       public:
       void start(){
           cout<<"Swift started"<<endl;
       }
       void stop(){
           cout<<"Swift stopped"<<endl;
       }

};
int main(){
    Car *c;

    Swift s;c=&s;
      c->start();
    c->stop();
    Innova i;c=&i;
    c->start();
    c->stop();
  
}
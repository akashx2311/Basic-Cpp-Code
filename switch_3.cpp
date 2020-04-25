#include<iostream>
  using namespace std;
  int main(){
cout<<"Menu\n 1.Add\n 2.Sub\n 3.Mul\n 4.Div\n"<<endl;
   int  opt;
    cin>>opt;
     int a,b,c;
     cout<<"enter two digit"<<endl;
     cin>>a>>b;
   switch(opt){
        case 1:c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
       case 4:   c=a/b;
       break;
    }
    cout<<"result is "<<c<<endl;
     return 0;
}

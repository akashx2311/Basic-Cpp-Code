#include<iostream>
 using namespace std;
  int main(){
    int a;
    cout<<"enter a digit i will convert into words!: "<<endl;
     cin>>a;
     switch(a){
           case 1:cout<<"one"<<endl;
             break;
            case 2: cout<<"two"<<endl;
            break;
             case 3: cout<<"three"<<endl;
            break;
           case 4:   cout<<"four"<<endl;
             break;
           case 5:  cout<<"five"<<endl;
            break;
            default :  cout<<"no. greater then 'five' "<<endl;
            break;
       }
    return 0;
}


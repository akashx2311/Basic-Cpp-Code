#include<iostream>
using namespace std;
class MyException:public exception{

};
int main(){
    int a=10,b=0,c;
    try{
    if(b==0)
    throw MyException();
    else
    {
         cout<<a/b;
    }
    
    }
    catch(MyException e)
    {
        cout<<"Error occured"<<endl;
    }

}
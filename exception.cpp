#include<iostream>
using namespace std;
int main(){
    int a=10,b=0,c;
    try{
        if (b==0)
        throw 101;
        else
    cout<<a/b<<endl;}
    catch(int e){
        cout<<"Error! Found "<<e<<endl<<"please! refer to the manual"<<endl;
    }
    return 0;
}
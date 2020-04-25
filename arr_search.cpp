#include<iostream>
   using namespace std;
  int main(){
   int n;
   cout<<"enter the size of the array:"<<endl;
    cin>>n;
   int arr[n],key;
    cout<<"enter the array element:"<<endl;
       for(auto &x:arr)
         cin>>x;
      cout<<"enter the key want to search! "<<endl;
       cin>>key;

          for(int i=0;i<n;i++)
             if(key==arr[i]){
             cout<<"key! found at index"<<i<<endl;
              return 0;}
         cout<<"key! not found "<<endl;
       return 0;
    }
             

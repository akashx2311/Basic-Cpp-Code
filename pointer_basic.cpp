 #include<iostream>
   using  namespace std;
int main(){
     int arr[]={1,2,3,4,5,6};
     int *p=arr,*q=arr+5;
     for(int i=0;i<6;i+=2)
     cout<<*p+i<<" "<<*q-i<<endl;
   }

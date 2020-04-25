#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ifs("myfile.txt");
     string a,b,c;
     getline(ifs,a);
     getline(ifs,b);
     ifs>>c;
     cout<<a<<endl<<b<<c<<endl;
    if(ifs.eof())
     cout<<"EOF"<<endl;
     ifs.close();

}
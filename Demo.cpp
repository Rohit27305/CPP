#include<iostream>
using namespace std;
void printFullName(){
  string name;
  cout<<"Enter full Name : ";
  getline(cin,name);
  cout<<"Your Name : "<<name;
}

int main(){
  int a ;

  cout<<"size of int : "<<sizeof(int)<<endl;
  cout<<"size of float : "<<sizeof(float)<<endl;
  cout<<"size of double : "<<sizeof(double)<<endl;
  cout<<"size of long : "<<sizeof(long)<<endl;
  cout<<"size of long long : "<<sizeof(long long)<<endl;
  cout<<"size of long int : "<<sizeof( long int)<<endl;
  cout<<"size of long double : "<<sizeof(long double)<<endl;

  
  return 0;
}
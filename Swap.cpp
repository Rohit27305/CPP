#include<iostream> 
using namespace std;
int main(){
  int a , b ;
  cout<<"without Using third Variable\n\n";
  cout<<"Enter two Numbers";
  cin>>a>>b;
  cout<<"Before Swapping : "<<a<<" "<<b;
  a = (a+b)-a;
  b = (a+b)-b;
  cout<<"After Swapping : "<<a<<" "<<b;

  cout<<"Using third Variable\n\n";
  cout<<"Enter two Numbers";
  cin>>a>>b;
  int temp = a;
  a = b;
  b = temp;
  cout<<"After Swapping : "<<a<<" "<<b;
  
  return 0;
  
}
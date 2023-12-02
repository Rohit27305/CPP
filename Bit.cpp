#include<iostream> 
using namespace std;

void swap(int n1 , int n2){
  n1 = n1^n2;
  n2 = n1^n2;
  n1 = n1^n2;
  cout<<"n1 : "<<n1<<" n2 : "<<n2<<endl;
}

int getBit(int n , int i){
  int mask = 1<<i;
  return (n & mask) > 0 ? 1 : 0;
}

int main(){
  int n = 2;
  n = n>>1; // left shift n>>2 == n/2
  cout<<n<<endl;

  n = n<<1; // right n>>1 == n*2
  cout<<n<<endl;

  int n1 = 5 , n2 = 3;
  swap(n1 , n2);
  
  return 0;
}
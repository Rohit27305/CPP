#include<iostream> 
using namespace std;

int main(){

  int a,b;
  cout<<"Enter two numbers : ";
  cin>>a>>b;

  char op;
  cout<<"Enter the operation : ";
  cin>>op;
  switch(op){
    case '+': 
      cout<<"Addition : "<<(a+b);
      break;
    case '-': 
      cout<<"Subtraction : "<<(a-b);
      break;
    case '*': 
      cout<<"Multiplication : "<<(a*b);
      break;
    case '/': 
      cout<<"Division : "<<(a/b);
      break;
    default : 
      cout<<"Invalid Operation";
  }
  
  return 0;
}
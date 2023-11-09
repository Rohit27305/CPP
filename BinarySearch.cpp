#include<iostream>
using namespace std;

int binary_search(int arr[] , int l , int h , int key){
  if(l >= h){
    return -1;
  }
  int mid = (l+h)/2;
  if(arr[mid] == key){
    return mid;
  }
  return binary_search(arr , l , mid-1 , key);
  return binary_search(arr , mid+1 , h , key);
}

int main(){

  int arr[] = { 1,3,4,5,6,7,8};
  cout<<binary_search(arr , 0 , 6  , 5);
  return 0;
}
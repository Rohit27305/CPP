#include<bits/stdc++.h> 
using namespace std;

void bubble_sort(vector<int>& arr , int n){
  for(int i = 0; i < n; i++){
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j] , arr[j+1]);
      }
    }
  }
}

int main(){
  vector<int> arr = { 2 ,3 ,4 ,1,0,6};
  bubble_sort(arr , 6);
  for(int i=0;i<6;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}
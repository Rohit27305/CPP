#include<bits/stdc++.h> 
using namespace std;

void selection_sort(vector<int>& arr , int n){
  for(int i = 0; i < n; i++){
    int min = i;
    for(int j=i+1;j<n;j++){
      if(arr[min]>arr[j]){
        min = j;
      }
    }
    swap(arr[min] , arr[i]);
  }
}

int main(){
  vector<int> arr = { 2 ,3 ,4 ,1,0,6};
  selection_sort(arr , 6);
  for(int i=0;i<6;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}
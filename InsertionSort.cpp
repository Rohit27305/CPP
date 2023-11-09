#include<iostream> 
using namespace std;

void insertion_sort(vector<int>& arr , int n){
  for(int i = 1; i < n; i++){
    int j = i;
    if(arr[j]<arr[j-1]){
      while(arr[j-1]>=arr[j]&&j>0){
        swap(arr[j],arr[j-1]);
        j--;
      } 
    }
  }
}

int main(){
  vector<int> arr = { 2 ,3 ,4 ,1,0,6};
  insertion_sort(arr , 6);
  for(int i=0;i<6;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}
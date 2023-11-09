#include<bits/stdc++.h>
#include<vector>
vector < int > sortedArray(vector < int > a, vector<int> b) {
    if(a.size()==1&&b.size()==1&&a[0]!=b[0]){
        return {a[0], b[0]};
    }
    vector<int> ans;
    int i = 0 , j = 0 ;
    while(i<a.size()||j<b.size()){
        ifa[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
  while(i<a.size()){
      if(i == 0 || a[i] != a[i-1])
          ans.push_back(a[i]);
      i++;
  }
  while(j<b.size()){
      if(j == 0 || b[j] != b[j-1])
          ans.push_back(b[j]);
      j++;
  }

    return ans;
}
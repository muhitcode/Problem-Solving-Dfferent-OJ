#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int arr1[n],arr2[m];
  for(int i=0;i<n;i++)
    cin>>arr1[i];
  for(int i=0;i<m;i++)
    cin>>arr2[i];
  unordered_map<int,int> mp;
  for(int i=0;i<m;i++)
    mp[arr2[i]]++;
  vector<int> ans;
  for(int i=0;i<n;i++){
    if(mp[arr1[i]] ==0){
      ans.push_back(arr1[i]);
    }
  }
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

  
  return 0;
}
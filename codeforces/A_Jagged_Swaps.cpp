#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    vector<int> ve(x);
    for(int i =0;i<x;i++){
     cin>>ve[i];
    }
    if(ve[0] ==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
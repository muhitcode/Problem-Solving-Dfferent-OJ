#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
      for(int k=1;k<=n;k++){
        cout<<"*";
      }
      cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}
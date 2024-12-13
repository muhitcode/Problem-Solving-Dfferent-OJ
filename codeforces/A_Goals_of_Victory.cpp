#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    signed int ar[n];
    for(int i=0;i<n-1;i++){
      cin>>ar[i];
    }
    int x=0;
    for(int i=0;i<n-1;i++){
      x+=ar[i];
    }
    cout<<x*(-1)<<endl;
  }
  return 0;
}
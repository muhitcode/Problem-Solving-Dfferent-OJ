#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int n;cin>>n;
  int m;
  vi a(n+1);
  for(int i=1;i<=n;i++){
    cin>>m;
    a[m]=i;
  }
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int t;cin>>t;
  while(t--){
    int x,y,a;
    cin>>x>>y>>a;
    int ans = (a)%(x+y);
    if(ans<x) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}
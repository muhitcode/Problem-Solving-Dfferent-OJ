#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  ll t;cin>>t;
  while(t--){
    ll x;cin>>x;
    ll ans,j=1;
    int cnt=0;
    vi a;
    while(x>0){
      ll i = x%10;
      if(i!=0){
        ans = i*j;
        a.push_back(ans);
        cnt++;
      }
      j *=10;
      x/=10;
    }
    cout<<a.size()<<endl;
    for(auto i: a) cout<<i<<" ";
    cout<<endl;
  }
  return 0;
}
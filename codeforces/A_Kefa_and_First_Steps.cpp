#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  ll n,c=0,mx=0;cin>>n;
  vector<ll> a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  for(ll i=0;i<n-1;i++){
    if(a[i]<=a[i+1]) 
      c++;
    else{
      mx = max(mx,c);
      c=0;
    }
  }
  mx = max(mx,c);
  cout<<mx+1<<endl;

  return 0;
}
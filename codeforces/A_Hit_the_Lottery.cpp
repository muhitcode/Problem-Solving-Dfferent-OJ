#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
vi a ={100,20,10,5,1};
int main(){
  ll n,ans=0;cin>>n;
  for(int i=0;i<a.size();i++){
    ans+=n/a[i];
    n%=a[i];
  }
  cout<<ans<<endl;
 
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  ll n;cin>>n;
  ll ans = -1;
  if(n%2==0){
    cout<<n/2<<endl;;
  }else{
    cout<<-(n+1)/2<<endl;
  }
  return 0;
}
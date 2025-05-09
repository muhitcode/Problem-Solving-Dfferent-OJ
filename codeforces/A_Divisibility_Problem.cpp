#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int t;cin>>t;
  while(t--){
    ll a,b;cin>>a>>b;
    ll t = a%b;
    if(t==0){
      cout<<0<<endl;
    }else{
      cout<<b-t<<endl;
    }
  }
}
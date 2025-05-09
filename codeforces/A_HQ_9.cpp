#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  string s;
  cin>>s;
  bool a=false;
  for(int i=0;i<s.size();i++){
    if(s[i]=='H' || s[i]=='Q'|| s[i]=='9'){
      a=true;
    }
  }
  if(a) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
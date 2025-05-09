#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  string s,m,ans;
  cin>>s>>m;
  for(int i=0;i<s.size();i++){
    if(s[i]==m[i]){
      ans.push_back('0');
    }else{
      ans.push_back('1');
    }
  }
  cout<<ans<<endl;
  return 0;
}
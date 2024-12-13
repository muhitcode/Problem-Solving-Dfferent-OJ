#include<bits/stdc++.h>
using namespace std;


int main(){

  string s, m;
  cin>>s>>m;
  cout<< s.size()<<" "<<m.size()<<endl;
  string c=s+m;
  cout<<c<<endl;
  int t = s[0];
  s[0] = m[0];
  m[0] = t;
  cout<< s<<" "<<m;
  

  return 0;
}
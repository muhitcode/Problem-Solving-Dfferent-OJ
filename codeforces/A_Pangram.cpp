#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  short n;cin>>n;
  set<char> s;
  char c;
  for(int i=0;i<n;i++){
    cin>>c;c = tolower(c);
    s.insert(c);
  }
  s.size()==26?cout<<"YES\n":cout<<"NO\n";
  return 0;
}
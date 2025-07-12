#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,o=0;cin>>n;
    string s;
    cin >> s;
    map<char, int> m;
    for(auto &x: s){
      m[x]++;
    }
    for(auto &i:m){
      if(i.second&1){
        o++;
      }
    }
    cout<<max(0,o-1)<<endl;

  }

  return 0;
}

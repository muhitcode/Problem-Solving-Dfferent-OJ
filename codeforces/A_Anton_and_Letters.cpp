#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  string s;
  getline(cin,s);
  set<char> c;
  for(int i=0;i<s.size();i++){
    if(s[i]>=97 && s[i]<=122){
      c.insert(s[i]);
    }
  }
  cout<<c.size()<<endl;
  return 0;
}
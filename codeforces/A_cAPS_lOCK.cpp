#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  string s;
  cin>>s;
  int t = 0;
  for(char i:s)
    if(isupper(i)) t++;
  if((islower(s[0]) && t==s.size()-1) || t==s.size()){
    for(int i=0;i<s.size();i++){
      if(isupper(s[i])) s[i] = tolower(s[i]);
      else s[i] = toupper(s[i]);
    }
  }
  cout<<s;
}
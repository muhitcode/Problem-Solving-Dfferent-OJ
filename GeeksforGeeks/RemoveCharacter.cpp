#include<bits/stdc++.h>
using namespace std;

string removeChars(string s1,string s2){
  for(auto i:s2){
    while(find(s1.begin(),s1.end(), i)!=s1.end()){
      auto it = find(s1.begin(),s1.end(), i);
      s1.erase(it);
      }
    }
  return s1;
  }




int main(){
  string s1,s2;
  cin>>s1>>s2;
  cout<<removeChars(s1,s2);

  return 0;
}
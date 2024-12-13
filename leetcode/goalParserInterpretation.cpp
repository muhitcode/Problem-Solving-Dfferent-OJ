#include<bits/stdc++.h>
using namespace std;


int main(){
  string s;
  cin>>s;
  string a ="";
for(int i =0;i<s.size();i++){
  if(s[i-1] == '(' && s[i] == ')'){
    a.push_back('o');
    i++;
  }else if(s[i-1]!='(' && s[i-1]!=')'){
    a.push_back(s[i-1]);
  }
}
cout<<a;
  return 0;
}


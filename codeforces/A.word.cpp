#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int u = 0,l=0;
  for (int i = 0; i < s.size(); i++){
   if(isupper(s[i])){
    u++;
   }
   else{
    l++;
   }
  }
  if(u>l){
    for (int i = 0; i < s.size(); i++){
      cout<<char(toupper(s[i]));
    }
  }
  else{
    for (int i = 0; i < s.size(); i++)
    {
      cout<<char(tolower(s[i]));
    }  
  }
  return 0;
}


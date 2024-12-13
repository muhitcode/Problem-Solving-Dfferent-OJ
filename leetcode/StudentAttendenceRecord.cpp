#include<bits/stdc++.h>
using namespace std;

bool checktf(string s){
  int a = 0;
  int b = 0;
  bool c = true;
  for(int i=0;i<s.size();i++){
    if(s[i] != 'L'){
      b =0;
    }
    if(s[i] == 'A'){
      a++;
    }
    if(s[i] == 'L'){
      b++;
    }
    if(b==3){
      c = false;
    }
  }
  if(c&&a<2){
    return true;
  }
  return false;
}

int main(){
  string s;
  cin>>s;
  if(checktf(s)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }

  return 0;
}
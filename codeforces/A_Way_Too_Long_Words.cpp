#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  string str;
 

  for(int i=1;i<=t;i++){
    cin>>str;
    int len = str.length();
    if(len>10){
      int f=str[0];
      int e= str[len];
      cout<<str[0]<<len-2<<str[len-1]<<endl;
    }else{
      cout<<str<<endl;
    }

  }
  return 0;
}
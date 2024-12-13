#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int ct=6;
    bool f=0;
    int res = 0;
    while(ct--){
      if(x.find(s)!=string::npos){// it's mean that the x is in not the last pos in the string.
        f=1;
        break;
      }
      res++;
      x+=x;
    }
    if(f){
      cout<<res<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,x,y;
  cin>>t;

  for(int i=1;i<=t;i++){
   
     cin>>x>>y;
    int ans = floor((x*1+y*4)/5*3);
    cout<<ans<<endl;

  }

  
  return 0;
}
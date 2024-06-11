#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  float r;
  cin>>t;
  float pi = 2*acos(0.0);
  float ans;
  for(int i=1;i<=t;i++){
    cin>>r;
    ans = (4*(r*r)) - (pi*r*r);
    
    printf("Case %d: %.2f\n",i,ans);
  }
  
  return 0;
}
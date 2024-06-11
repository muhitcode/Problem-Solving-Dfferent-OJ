#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  int r1,r2,h,p;
  double r3;
  double pi =2.0 * acos(0.0);
  double ans;
  cin>>t;
  for(int i=1;i<=t;i++){
    cin>>r1>>r2>>h>>p;
    r3 = (p*(r1-r2))/(h*1.0) + r2;
    ans = (pi/3) * p * (r3*r3 + r2*r2 + r3*r2);
    printf("Case %d: %.10lf\n",i,ans);
    
  } 
  return 0;
}
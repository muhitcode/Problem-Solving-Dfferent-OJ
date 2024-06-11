#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,ld,fd;
  cin>>t;

  for(int i=1;i<=t;i++){
    int n;
    cin>>n;
    ld = n%10;
    for(int j=1;j<=5;j++){
      fd=n%10;
      n/=10;
    }
  cout<<"Sum = "<<ld + fd<<endl;
  }

  return 0;
}
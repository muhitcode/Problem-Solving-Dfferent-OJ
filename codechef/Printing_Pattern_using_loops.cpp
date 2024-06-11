#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n+2;i++){
    for(int j=1;j<=n+2;j++){
      if((i==1 || i==n) || (j==1 || j==n)){
        cout<<4;
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
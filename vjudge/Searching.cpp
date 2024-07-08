#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,m=-1;
  cin>>t;
  int a[t];
  for (int i = 0; i < t; i++)
  {
    cin>>a[i];
  }
  cin>>n;
  for(int i=0; i < t; i++){
    if(a[i] == n){
      m = i;
      break;
    }
    
  }
  cout<<m;
  
  
  return 0;
}
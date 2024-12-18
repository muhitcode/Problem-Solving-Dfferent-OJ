#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
       if(i==n-j)
        c++;
      }
    }
    cout<<c<<endl;;
  }

  return 0;
}
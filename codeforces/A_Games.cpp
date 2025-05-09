#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int n;
  cin>>n;
  int a[120]={0};
  int b[120]={0};
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    a[i]=x;
    b[y]++;
  }
  int ans =0;
  for(int i=0;i<120;i++){
    ans+=b[a[i]];
  }
  cout<<ans<<endl;
  return 0;
}
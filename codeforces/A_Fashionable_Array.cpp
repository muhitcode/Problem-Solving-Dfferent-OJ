#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int t;cin>>t;
  while(t--){
   int n;cin>>n;
   int a[n];
   for(int i=1;i<=n;i++) cin>>a[i];
   sort(a+1,a+1+n);
   int x=0,y=0; 
   for(int i=1;i<=n && a[i]%2 != a[n]%2;i++) 
    x++;
   for(int i=n;i>=1 && a[i]%2 != a[1]%2;i--)
    y++;
   cout<<min(x,y)<<endl;
  }
  return 0;
}
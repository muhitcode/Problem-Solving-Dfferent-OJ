#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int k,l,m,n,d,c=0;
  cin>>k>>l>>m>>n>>d;
 for(int i=1;i<=d;i++){
  if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
  c++;
 }cout<<c<<endl;
  return 0;
}
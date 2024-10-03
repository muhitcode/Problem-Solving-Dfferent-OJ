#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,k;
  long long n;
  int ans= 0;
  cin>> k>> n>>w;
  for(int i=1; i<=w;i++) {
    ans += i*k;
  }
  int answer = ans - n;
  if(ans == n || n > ans){
    cout<<"0"<<endl;
  }else{
    cout<<answer<<endl;
  }
 
  return 0;
}
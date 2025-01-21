#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  bool x = t % 2 == 0 && t > 2;
   if (x)
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
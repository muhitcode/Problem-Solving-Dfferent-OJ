#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int rem = 0;
  for(int i=1;i<=k;i++){
    rem = n%10;
    if(rem == 0){
      n/=10;
    }else if(rem != 0){
      n-=1;
    }
  }
  cout<<n<<endl;
  return 0;
}
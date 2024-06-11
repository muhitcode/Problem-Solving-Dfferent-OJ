#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum=0;
  int fi=1,se=1;
  int ans=2;
  if(n>2){
    for(int i=1;i<=n-2;i++){
      sum =fi+se;
      fi=se;
      se=sum;
      ans +=sum;
    }
  }else if(n==1){
    cout<<fi<<endl;
  }else if(n==2){
    cout<<fi+se<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int count=0;
  int x=0;
  for(int i=1;i<=n;i++)
  {
    for(int i=1;i<=3;i++)
    {
      int t;
      cin>>t;
      if(t==1){
        count++;
      }
    }
    if(count>=2){
      x++;
    }
    count=0;
  }
  cout<<x<<endl;
  return 0;
}
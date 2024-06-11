#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a=1000;
  for(int i=200;i>=1;i--){
    for(int j=1;j<=5;j++){
       cout<<a--<<"\t";
    }
    cout<<endl;
   
  }
  cout<<endl;
  return 0;
}
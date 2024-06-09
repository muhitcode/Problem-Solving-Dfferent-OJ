#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,i;
  cin>>a>>b;
  int count =1;
  for(i=1;;i++){
    a*=3;
    b*=2;
    if(a>b){
      break;
    }
    count++;
  }
  cout<<count<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main(){
  string a,b;
  cin>>a;

  b=a;

  int s = 0;
  int e = b.size() -1;
  while(s<e){
    swap(b[s],b[e]);
    s++;
    e--;
  }
  if(b!=a){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
  
  return 0;
}
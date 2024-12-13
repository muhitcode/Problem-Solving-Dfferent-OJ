#include<bits/stdc++.h>
using namespace std;


int main(){
  string a,b;
  a = b;
  cin>>a;
  int s = 0;
  int e = b.size() -1;
  while(s<e){
    swap(b[s],b[e]);
    s++;
    e--;
  }
  if(a != b){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
  
  return 0;
}
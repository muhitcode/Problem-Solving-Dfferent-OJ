#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  set<int> s;
  
  for(int i=0;i<4;i++){
    int x;cin>>x;
    s.insert(x);  
  }
  cout<<4-s.size()<<endl;

  return 0;
}
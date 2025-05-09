#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int n;cin>>n;
  int x;cin>>x;
  set<int> a;
  for(int i=0;i<x;i++){
    int m;cin>>m;
    a.insert(m);
  }
  int y;cin >> y;
  set<int> b;
  for (int i = 0; i < y; i++){
    int g;cin>>g;
    b.insert(g);
  }
  a.insert(b.begin(),b.end());
  if(a.size()==n){
    cout << "I become the guy."<<endl;
  }else{
    cout << "Oh, my keyboard!"<<endl;
  }

  return 0;
}
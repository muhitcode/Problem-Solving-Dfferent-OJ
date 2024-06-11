#include<bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin>>x;
  vector<int> ln ={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
  for(int i=0;i<ln.size();i++){
    if(x%ln[i] == 0){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
 
}
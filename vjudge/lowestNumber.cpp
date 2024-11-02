#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>> v[i];
  }
  int m = *min_element(v.begin(),v.end());
  int in = 0;
  for (int i =0;i<n;i++)
  {
    if(v[i] == m){
      in = i;
      break;
    }
  }
  cout<<m<<" "<<in +1<<endl;
  
  return 0;
}
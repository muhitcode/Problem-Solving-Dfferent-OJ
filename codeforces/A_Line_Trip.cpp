#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>> v[i];
    int m = INT_MIN;
    for(int i=1;i<n;i++){
      int dif = v[i] - v[i-1];
      m = max(m, dif);
    }
    m = max(m, v[0] -0);
    m = max(m, 2*(x-v[n-1]));
    cout<<m<<endl;

    
    
  }
  return 0;
}
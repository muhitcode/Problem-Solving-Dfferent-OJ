#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
void solve(){
  int n, x = 0, a;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a;
    x ^= a;
  }
  cout << (x == 0 ? 0 : (n % 2 ? x : -1)) << "\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
   solve();
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define max(a, b) (a<b?b:a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c) for(int(a) =0;(a) < (c);(a)++)
#define FORL(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
#define FORR(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
#define INF 1000000000000000003
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair




int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    vi a(n);
    int diff = mod;
    bool sorted = true;
    FOR(i,n){
      cin>>a[i];
      if(i>0){
        diff = min(a[i] - a[i-1],diff);
        sorted &= a[i]>=a[i-1];
      }
    }
    if(!sorted){
      cout<<0<<endl;
      continue;
    }
    cout<<diff/2 +1<<endl;
    
  }
  return 0;
}
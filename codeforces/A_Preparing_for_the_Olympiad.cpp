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
typedef vector<pair<int,int>> vii;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair
#define nl endl
#define sp " " 




int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    vi a(n),b(n);
    for(auto &x:a)
      cin>>x;
    for(auto &x:b)
      cin>>x;
    int answer = a[n-1];
    for(int i = 0;i<n-1;i++)
      answer += max(0, a[i]-b[i+1]);
    cout<<answer<<nl;
    
  }
  
}
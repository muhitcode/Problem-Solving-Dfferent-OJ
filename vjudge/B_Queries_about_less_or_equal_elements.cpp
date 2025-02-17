// #include<bits/stdc++.h>
// using namespace std;
// #define max(a, b) (a<b?b:a)
// #define min(a, b) ((a>b)?b:a)
// #define mod 1e9+7
// #define FOR(a,c) for(int(a) =0;(a) < (c);(a)++)
// #define FORL(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
// #define FORR(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
// #define INF 1000000000000000003
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<pair<int,int>> vii;
// typedef pair<int, int> pi;
// #define F first
// #define S second
// #define PB push_back
// #define POP pop_back
// #define POP pop_back
// #define MP make_pair
// #define nl endl
// #define sp " "
// int main(){
//   int a,b;
//   cin>>a>>b;
//   vi m(a),n(b);
//   vi hs(mod);
//   FOR(i,a)
//     cin>>m[i];
//   FOR(i,b)
//     cin>>n[i];
//   for(int i=0;i<mod;i++){
//     if(m[i]<n[i]){
//       hs[n[i]]++;
//     }else{
//       hs[i]=0;
//     }
//   }
//   for(vi i: hs){
//     cout<<i<<sp;
//   }cout<<nl;
  
//   return 0;
// }

#include <bits/stdc++.h>
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  FOR(i,n){
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  FOR(i,m){
    int x;
    cin >> x;
    auto it = upper_bound(a.begin(), a.end(), x);
    cout << (it - a.begin()) << " ";
  }

  return 0;
}

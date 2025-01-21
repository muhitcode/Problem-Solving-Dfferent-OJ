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




int main(){
  
  int t;
  cin>>t;
  while(t--) {
    int a,b;
    cin>>a>>b;
    int xk,yk;
    cin>>xk>>yk;
    int xq,yq;
    cin>>xq>>yq;
    vector<pair<int,int>> dirs = {{a,b}, {a,-b}, {-a,b}, {-a,-b},{b,a}, {b,-a}, {-b,a},{-b,-a}};
    
    set<pi> st1,st2;
    for(auto d: dirs){
      int x = xk + d.first;
      int y = yk + d.second;

      st1.insert(make_pair(x,y));
      
      x = xq + d.first;
      y = yq + d.second;
      st2.insert(make_pair(x,y));

    }

    int ans = 0;
    for(auto pos:st1){
      if(st2.find(pos)!=st2.end()){
        ans++;
      }
    }
    cout<<ans<<endl;
    
  }
  return 0;
}
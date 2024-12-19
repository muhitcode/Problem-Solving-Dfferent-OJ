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

int answer(vi a[],int N,int m){
  int ans = 0;
  FOR(i, N)
  {
    
    if (is_sorted(a.begin(), a.end()))
    {
      return ans;
    }
    if (a[i]>=m)
    {
      a[i]++;
    }
    else
    {
      a[i]--;
    }
   
    ans++;
  }
  return ans;
}




int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin>>T;
  while(T--) {
    int N;
    cin>>N;
    vi a(N);
    FOR(i,N)
      cin >> a[i];
    int m = INT_MAX;
    for(int i=1;i<N;i++){
      m = min(m,(a[i]- a[i-1]));
    }
   
    int ans = answer(a,N,m);
    cout<<ans<<endl;
   
  }
  return 0;
}
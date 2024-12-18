#include<bits/stdc++.h>
using namespace std;

#define max(a, b) (a<b?b:a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c) for(int(a) =0;(a) < (c);(a)++)
#define FORL(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
#define FORR(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair

void solve(){
 int n;cin>>n;
 vi a(n);
 FOR(i,n)cin>>a[i];
 sort(a.begin(),a.end());
  if(a[0] == a[n-1]){
    cout<<-1<<endl;
    return ;
  }
  vector<int> v1,v2;
  v2.push_back(a[n-1]);
  cout<<v2.size()<<" ";
  
  for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    v1.push_back(x);
  }
  cout<<v1.size()<<""<<v2.size()<<endl;
  for(auto i:v1){
    cout<<i<<" ";
  }cout<<endl;
  for(auto i: v2){
    cout<<i<<" ";
  }cout<<endl;
  
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}
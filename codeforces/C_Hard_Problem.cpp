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




int main(){

  int t;
  cin>>t;
  while(t--){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans =0;
    if(m<a){
      ans += a-m;
    }if(m>=a){
      ans +=a;
    }
    if(m<b){
      ans += b-m;
    }
    if(m>=b){
      ans+=b;
    }
    
    int x = 2*m-ans;
    if(x>0){
      cout<<ans +c<<endl;
    }else{
      cout<<ans<<endl;
    }
    
  }

  return 0;
}
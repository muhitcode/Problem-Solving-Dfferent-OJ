#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define nl "\n"
#define pi pair<int,int>
#define vpi vector<pair<int,int>>
#define sp char(1<<5)
void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(ll &x: v) cin>>x;
    sort(v.begin(),v.end(),greater<int>());
    ll free = 0;
    for(ll x:v){
        if(x*(1<<free)<=c){`
            free++;
        }
    }
    cout<<n-free<<nl;
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
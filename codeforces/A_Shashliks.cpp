#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define nl "\n"
#define pi pair<int,int>
#define vpi vector<pair<int,int>>
#define sp char(1<<5)
int main(){
    int t;cin>>t;
    while(t--){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        int ans = 0;
        if(x>y) swap(a,b),swap(x,y);
        if(k>=a){
            ans += ((k - a) / x) + 1;
            k -= (((k - a) / x) + 1) * x;
        } 
        if(k>=b){
            ans +=(((k-b)/y)+1);
        }
        cout<<ans<<nl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi a(n);
        int ans = 0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        vi v = a;
        sort(v.begin(),v.end());
        for(int i = 0;i<n;i++){
            if(a[i]!=v[1]){
                ans = i;
                break;
            }    
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
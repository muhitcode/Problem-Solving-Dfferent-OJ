#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=0;
        // for(int i=0;i<n;i++){
        //     if(a[i]==0){
        //         ans++;
        //         i+=k;
        //     }else if(a[i]==1){
        //         i++;
        //         ans =0;
        //     }
        // }

        int i,j;
        for(i=0;i<n;i++){
            
            bool m=true;
            for(j=0;j<k;j++){
                if(a[i]==1){
                    m=false;
                    break;
                }
            }
            // i=j;
            if(m){
                ans++;
            }
            if(a[i]==1){
                i++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
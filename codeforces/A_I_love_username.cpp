#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
    int t;cin>>t;
    vi a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int mx = 0;
    int mi = 0,c=0;
    for(int i=1;i<t;i++){
        if(a[i]>mx && a[i]>a[i-1]){
            c++;
            mx=a[i];
        }
        if(a[i]<mi && a[i]<a[i-1]){
            c++;
            mi=a[i];
        }
    }
    cout<<c;
    return 0;
}
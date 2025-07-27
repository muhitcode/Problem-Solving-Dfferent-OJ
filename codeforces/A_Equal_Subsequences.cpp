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
        int x,y;
        cin>>x>>y;
        for(int i=0;i<x-y;i++) cout<<0;
        for(int i=0;i<y;i++)cout<<1;
    cout<<nl;
    }
    return 0;
}
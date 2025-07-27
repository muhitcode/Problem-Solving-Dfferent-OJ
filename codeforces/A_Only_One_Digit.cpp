#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        vi a(s.size());
        for(int i=0;i<s.size();i++){
            a[i]=s[i]-'0';
        }
        int mi = INT_MAX;
        for(int i=0;i<a.size();i++){
            if(a[i]<mi)
                mi = a[i];
        }
        cout<<mi<<endl;

    }
    return 0;
}
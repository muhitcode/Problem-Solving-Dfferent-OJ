#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
    int k,r;
    cin>>k>>r;
    int i;
    for(i=1;i<=10;i++){
        if(k*i%10==r || k*i%10==0) 
            break;
    }
    cout<<i<<endl;
    return 0;
}
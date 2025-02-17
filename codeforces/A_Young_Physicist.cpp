#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define nl endl
#define sp " "
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T;
    int x=0,y=0,z=0,X=0,Y=0,Z=0;
    while (T--) { 
        cin>>x>>y>>z;
        X+=x;Y+=y;Z+=z;
    } 
    if(X==0 && Y==0&&Z==0){
    	cout<<"YES"<<endl;
    }else{
    	cout<<"NO"<<endl;
    }
    return 0; 
}


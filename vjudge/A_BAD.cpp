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
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t; 
    cin >> t; 

    vector<pair<int,int>> vp;
    	for(int i =0;i<t;i++){
    		int n,k;
    		cin>>n>>k;
    		vp.emplace_back(n,k);
    	}
    	int some = vp[0].second;
    	for(int i=1;i<t;i++){
    		int time = vp[i].first - vp[i-1].first;
    		int x =(some-time);
    		if(x<=0){
    			some =0;
    			time = 0;
    		}
    			some = (some - time) + vp[i].second;
    		
    		
    	}
    	cout<<some<<endl;

    return 0; 
} 


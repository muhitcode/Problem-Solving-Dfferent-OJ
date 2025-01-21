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

bool cmp(pair<int,int> &a,pair<int,int> &b){
	return a.second<b.second;
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
   	
   	int n,y=0;cin>>n;
   	vector<pair<int,int>> vp;
   	for(int i=0;i<n;i++){
   		int x,y;
   		cin>>x>>y;
   		vp.emplace_back(x,y);
   	}
   	sort(vp.begin(),vp.end(),cmp);
   	int last_finish =0,count =0;
   	for(auto &movie:vp){

   		if(last_finish<=movie.first){
   			y++;
   			last_finish=movie.second;
   		}
   	}
   	cout<<y;

} 

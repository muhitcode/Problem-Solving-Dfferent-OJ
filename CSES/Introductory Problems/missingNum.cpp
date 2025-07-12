#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
	ll n,i;cin>>n;
	vi a(n,0);
	for(int i=0;i<n-1;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	for(i=0;i<n-1;i++){
		if((a[i]+1)!=a[i+1])
			break;
	}	
	cout<<a[i]+1<<endl;

	// 1 2 3 5
	//      
}
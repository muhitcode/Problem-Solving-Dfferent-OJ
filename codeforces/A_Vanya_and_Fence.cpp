#include "bits/stdc++.h" 
using namespace std; 
#define ll long long
#define vi vector<int>
int main() 
{ 
	int n,h,ans = 0;
	cin>>n>>h;
	vi a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]>h) ans+=2;
		else ans++;
	} 
	cout<<ans<<endl;
 
} 
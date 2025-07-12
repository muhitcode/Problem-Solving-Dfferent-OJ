#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
	int n;cin>>n;
	vi a(n,0);
	ll ans =0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	//
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			ans +=a[i-1]-a[i];
			a[i]=a[i-1]; // for printing the ans array.
		}
	}
	cout<<ans<<endl;
}


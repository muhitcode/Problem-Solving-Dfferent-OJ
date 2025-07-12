#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
	ll n;cin>>n;
	// n ev	/2
	// n od *3 & +1
	// while(n==1)
	while(n != 1){
		cout<<n<<" ";
		if(n%2==0)
			n/=2;
		else
			n=3*n+1;
	}
	cout<<1<<" ";
}
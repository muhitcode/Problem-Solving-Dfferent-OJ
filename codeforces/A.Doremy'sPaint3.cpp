#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		vector<int> v(x);
		
		map<int, int> mp;
		for(int i = 0;i<x;i++){
			int n;
			cin>>n;
			mp[x]++;
		}
		if(mp.size()<=2){
			cout<<"YES"<<endl;
		}else{
			if(abs(mp.size()->second - mp.size()->second)<=1){
				cout<<"YES";
			}else{
				cout<<"NO";
			}
		}

	}
}
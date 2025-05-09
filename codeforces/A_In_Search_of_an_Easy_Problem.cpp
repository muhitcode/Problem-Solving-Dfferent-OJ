#include "bits/stdc++.h" 
using namespace std; 
#define ll long long
#define vi vector<int>
int main() 
{ 
	int n;cin>>n;
	bool m=0;
	vi a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==1){
			m=1;
		}
	}
	if(m)
		cout<<"HARD"<<endl;
	else
		cout<<"EASY"<<endl;
	return 0;
} 
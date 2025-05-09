#include "bits/stdc++.h" 
using namespace std; 
#define ll long long
#define vi vector<int>
int main() 
{ 
  	int n,m=0;cin>>n;
  	for(int i=0;i<n;i++){
  		int x,y;cin>>x>>y;
  		if(abs(x-y)>=2) m++;
  	}   
  	cout<<m<<endl;

    return 0; 
} 
#include "bits/stdc++.h" 
using namespace std; 
#define ll long long
#define vi vector<int>
int main() 
{ 
  	int n,c=1;cin>>n;
  	string s1,s2;
  	cin>>s1;
  	for(int i=0;i<n-1;i++){
  		cin>>s2;
  		if(s1!=s2){
  			c++;
  		}
  		s1=s2;
  	}
  	cout<<c<<endl;
  	
} 
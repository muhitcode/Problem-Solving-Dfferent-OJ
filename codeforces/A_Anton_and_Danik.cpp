#include "bits/stdc++.h" 
using namespace std; 
#define ll long long
#define vi vector<int>
int main() 
{ 
	int n;cin>>n;
  	string s;cin>>s;
  	int x=0,m = 0;  
  	for(int i=0;i<n;i++){
  		if(s[i] == 'A')
  			x++;  
  		if(s[i]=='D')
  			m++;
  	}
  	if(x>m)
  		cout<<"Anton"<<endl;
  	else if(x<m)
  		cout<<"Danik"<<endl;
  	else
  		cout<<"Friendship"<<endl;
} 
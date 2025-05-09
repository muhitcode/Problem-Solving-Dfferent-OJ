#include "bits/stdc++.h" 
using namespace std; 
#define ll long long
#define vi vector<int>
int main() 
{ 
     
	int a,b,c;cin>>a>>b>>c;
	cout<<max({a+b+c,a*b*c,(a+b)*c,a*(b+c),a+b*c,a*b+c})<<endl;
} 
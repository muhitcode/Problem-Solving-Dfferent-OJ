#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
	string s;
	cin>>s;
	int c =1,ans=1;
	//minimum 1 ..
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1])//previous element equal
			c++;
		else
			c=1;//not equal exit sequence
		ans =max(ans,c);// keeping the c,
	}	
	cout<<ans<<endl;

	// ATTCGGGA

	// cp, web , python(ml), academics

}
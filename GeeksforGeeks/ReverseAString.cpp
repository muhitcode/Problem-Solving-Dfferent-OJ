#include<bits/stdc++.h>
using namespace std;

int main(){
 
    string s;
    cin>>s;
    string res;
    for (long long i = s.size() - 1; i >= 0; i--)
      res += s[i];
    cout<<res;
}
#include<bits/stdc++.h>
using namespace std;

#define max(a, b) (a<b?b:a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c) for(int(a) =0;(a) < (c);(a)++)
#define FORL(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
#define FORR(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
#define INF 1000000000000000003
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair




int main(){
 int a,b;
 cin>>a>>b;
 int add = a+b;
 int mul = a*b;
 int sub = a-b;
 cout<<a<<" + "<<b<<" = "<<add<<endl;
 cout<<a<<" * "<<b<<" = "<<mul<<endl;
 cout<<a<<" - "<<b<<" = "<<sub<<endl;

  return 0;
}
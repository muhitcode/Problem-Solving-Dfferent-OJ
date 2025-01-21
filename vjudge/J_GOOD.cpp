// #include "bits/stdc++.h" 
// using namespace std; 
// #define max(a, b) (a < b ? b : a) 
// #define min(a, b) ((a > b) ? b : a) 
// #define mod 1e9 + 7 
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
// #define INF 1000000000000000003 
// typedef long long int ll; 
// typedef vector<int> vi; 
// typedef pair<int, int> pi; 
// #define F first 
// #define S second 
// #define PB push_back 
// #define POB pop_back 
// #define MP make_pair 
// int main() 
// { 
//     ios::sync_with_stdio(0); 
//     cin.tie(0); 
//     int n;
//     cin>>n;
//     vi a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int mS= INT_MIN
//     int cS=0;

//     FOR(i,n){
//         cS += a[i];
//         mS= max(mS,cS);
//         if(cS<0)
//             cS=0;
//     }   
//     cout<<mS;

//     return 0; 
// } 







#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    FOR(i,n) {
        cin >> a[i];
    }
    ll ms = a[0];  
    ll cs = a[0]; 

    for (ll i = 1; i < a.size(); i++) {
        
        cs = max(a[i], cs + a[i]);
        ms = max(ms, cs);
    }
    
    cout << ms << endl;
return 0;
}
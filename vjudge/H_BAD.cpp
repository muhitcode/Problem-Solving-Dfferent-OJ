// #include "bits/stdc++.h" 
// using namespace std; 
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// typedef vector<int> vi; 
// #define nl endl
// #define sp " "

// vi twoSum(const vi& a, int k){
//   unordered_map<int,int> hm;
//   for(int i=0;i<a.size();i++){
//     int comple = k - a[i];
//     if(hm.find(comple)!=hm.end()){
//       return {hm[comple],i};
//     } 
//     hm[a[i]] = i;
//   }
//   return {};
// }

// int main() 
// { 
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     int n,k;
//     cin>>n>>k;
//     vi a(n);
//     FOR(i,n)
//       cin>>a[i];
    
    
//     vi res = twoSum(a,k);
//     if(!res.empty())
//       cout<<res[0]+1<<sp<<res[1]+1<<nl;
//     else
//       cout<<"IMPOSSIBLE"<<nl;



//     return 0; 
// }




// #include <bits/stdc++.h>
// using namespace std;

// void fiTwoS(int n, int x, const vector<int>& a) {
//     unordered_map<int, int> s; 
//     for (int i = 0; i < n; ++i) {
//         int comp = x - a[i];
//         if (s[comp] != 0) {
//             cout << s[comp] << " " << i + 1 << endl;
//             return;
//         }
//         s[a[i]] = i + 1;
//     }
//     cout << "IMPOSSIBLE" << endl;
// }
// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     fiTwoS(n, x, a);

//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll* arr, ll N, ll X)
{
    map<ll, ll> m1;
    bool flag = true;
    for (int i = 0; i < N; i++) {
        if (flag) {
            if (m1.find(X - arr[i]) != m1.end()) {
                cout << (*(m1.find(X - arr[i]))).second
                    << " " << i + 1;
                flag = false;
            }
            m1.insert({ arr[i], i + 1 });
        }
    }
    if (flag)
        cout << "IMPOSSIBLE";
}
int main()
{

    ll N, X ;
    cin>>N>>X;
    ll arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    solve(arr, N, X);
}

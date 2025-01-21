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
//     int T; 
//     cin >> T; 
    
//     while (T--) { 
//     	ll ans = 0;
//       vi a;

//        for(int i=1;i<40;i++){
//        	int x;
//        	cin>>x;
//          if(x==0)
//             break;
//        	a.push_back(x);
         
//        }
//        sort(a.rbegin(),a.rend());
//        for(int i=1;i<40;i++){
//          ans += 2* pow(a[i],i);
//          if(ans>5000000){
//             cout<<"Too expensive"<<endl;
//             break;
//          }
//        }
//        if(ans<=5000000)
//        	cout<<ans<<endl;
       


//     } 
//     return 0; 
// } 



#include "bits/stdc++.h"
using namespace std;

#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;

ll integer_pow(int base, int exp) {
    ll result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
        if (result > 5000000) break; 
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T; 

    while (T--) {
        vi a; 
        while (true) {
            int x;
            cin >> x;
            if (x == 0) break; 
            a.push_back(x);
        }

        sort(a.rbegin(), a.rend());

        ll ans = 0;
        for (int i = 0; i < a.size(); i++) {
            ans += 2 * integer_pow(a[i],i + 1);

            if (ans > 5000000) {
                cout <<"Too expensive"<< endl;
                break;
            }
        }

        if (ans <= 5000000) {
            cout<<ans<<endl;
        }
    }

    return 0;
}
